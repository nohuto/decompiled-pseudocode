/*
 * XREFs of PrmOpregionHandlerWorker @ 0x1C00B1A6C
 * Callers:
 *     PrmOpregionHandler @ 0x1C00B19A0 (PrmOpregionHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrmOpregionHandlerWorker(_DWORD *P)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( *P != 1 )
  {
    v1 = -1073741822;
    goto LABEL_19;
  }
  if ( P[5] < 0x1Au )
  {
    v1 = -1073741811;
    goto LABEL_19;
  }
  v3 = *((_QWORD *)P + 3);
  v4 = *(_BYTE *)(v3 + 9);
  v5 = v3 + 10;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(v3 + 1) = 0LL;
  if ( v4 == 2 )
  {
    v6 = ((__int64 (__fastcall *)(__int64))qword_1C0081CB8)(v5);
    if ( v6 == -1073741275 )
    {
LABEL_6:
      *(_BYTE *)v3 = 3;
      goto LABEL_19;
    }
    if ( v6 == -1073741637 )
      *(_BYTE *)v3 = 2;
  }
  else if ( v4 == 1 )
  {
    v7 = ((__int64 (__fastcall *)(__int64))qword_1C0081CB0)(v5);
    if ( v7 == -1073741275 )
      goto LABEL_6;
    if ( v7 == -1073741637 )
      *(_BYTE *)v3 = 1;
  }
  else if ( v4 )
  {
    *(_BYTE *)v3 = 5;
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))qword_1C0081CA8)(v5, 0LL, 1LL, &v10);
    if ( v8 < 0 )
      *(_BYTE *)v3 = (v8 != -1073741275) + 3;
    else
      *(_QWORD *)(v3 + 1) = v10;
  }
LABEL_19:
  ExFreePoolWithTag(P, 0x46706341u);
  return v1;
}
