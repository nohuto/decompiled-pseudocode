/*
 * XREFs of sub_1800067C4 @ 0x1800067C4
 * Callers:
 *     sub_180007650 @ 0x180007650 (sub_180007650.c)
 * Callees:
 *     sub_180004B0C @ 0x180004B0C (sub_180004B0C.c)
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 *     sub_180005C04 @ 0x180005C04 (sub_180005C04.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

char __fastcall sub_1800067C4(PSRWLOCK SRWLock, int a2, __int64 a3)
{
  int *v4; // rdi
  int *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rdx
  char v11; // al
  char v12; // di
  HANDLE ProcessHeap; // rax
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int Buf1; // [rsp+38h] [rbp-C8h] BYREF
  int *v17; // [rsp+40h] [rbp-C0h] BYREF
  int *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  _BYTE v21[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = (int *)v21;
  v17 = (int *)v21;
  v7 = (int *)v21;
  v8 = 0LL;
  v18 = (int *)v21;
  v15 = 0LL;
  v9 = (char *)v22;
  v19 = (char *)v22;
  lpMem = 0LL;
  if ( !sub_180005C04(a3, &v15, v21, 0x100uLL) )
  {
    v10 = v15;
    if ( v15 >= 0x100 )
    {
      if ( v15 < 0x200 )
        v10 = 512LL;
      v11 = sub_180004B0C((__int64)&v17, v10);
      v8 = lpMem;
      if ( !v11 )
        goto LABEL_8;
      v9 = v19;
      v7 = v18;
      v4 = v17;
    }
    if ( !sub_180005C04(a3, &v15, v4, v9 - (char *)v4) )
    {
LABEL_8:
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( (char *)v4 + v15 <= v9 )
    v7 = (int *)((char *)v4 + v15);
  AcquireSRWLockExclusive(SRWLock);
  Buf1 = a2;
  v12 = sub_180005394((__int64)&SRWLock[17], &Buf1, 4uLL, (int)v4, (char *)v7 - (char *)v4, 1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v12;
}
