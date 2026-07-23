/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x140733344
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v6 = -1;
  v7 = 0;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_DWORD *)(v1 + 40);
  if ( (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v2 + 8))(v2, v3, &v6) )
  {
    v4 = HvpMarkCellDirty(v2, v3, 0) == 0 ? 0xC000017D : 0;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v2 + 16))(v2, &v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
