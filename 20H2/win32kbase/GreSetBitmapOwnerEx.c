/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C001DA90
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     GreSetBitmapOwner @ 0x1C001D880 (GreSetBitmapOwner.c)
 *     GreCreateBitmap @ 0x1C001D8A0 (GreCreateBitmap.c)
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0046274 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v2 = a2;
  LOBYTE(a2) = 5;
  v3 = 0;
  v5 = HmgShareLockCheck(a1, a2);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v3 = HmgSetOwner(a1, v2, v6);
    }
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)v7;
    v11 = 0LL;
    v12 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)v8 | (v9 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v12 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v11 + 14), (struct OBJECT *)v7);
      --*(_DWORD *)(v7 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      if ( v12 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    }
  }
  return v3;
}
