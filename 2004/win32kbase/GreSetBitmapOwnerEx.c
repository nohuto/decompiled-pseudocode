/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C0099670
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     GreCreateBitmap @ 0x1C0099480 (GreCreateBitmap.c)
 *     GreSetBitmapOwner @ 0x1C0099A10 (GreSetBitmapOwner.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00870E8 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, int a2)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v5 = HmgShareLockCheck(a1, 5);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || a2) && (a1 & 0x800000) == 0 )
      v3 = HmgSetOwner(a1, a2, 5);
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)v6;
    v10 = 0LL;
    v11 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v10, (unsigned __int16)v7 | (v8 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v11 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v10 + 14), (struct OBJECT *)v6);
      --*(_DWORD *)(v6 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
      if ( v11 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
    }
  }
  return v3;
}
