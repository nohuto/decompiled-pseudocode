/*
 * XREFs of sub_18001C5F4 @ 0x18001C5F4
 * Callers:
 *     sub_18001C764 @ 0x18001C764 (sub_18001C764.c)
 * Callees:
 *     sub_18001CAEC @ 0x18001CAEC (sub_18001CAEC.c)
 *     sub_18001F768 @ 0x18001F768 (sub_18001F768.c)
 *     sub_180021070 @ 0x180021070 (sub_180021070.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_18001C5F4(PSRWLOCK SRWLock, int a2, __int64 a3)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  char v10; // al
  char v11; // di
  HANDLE ProcessHeap; // rax
  _BYTE *v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v15; // [rsp+38h] [rbp-C8h]
  char *v16; // [rsp+40h] [rbp-C0h]
  LPVOID lpMem; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v20;
  v14 = v20;
  v7 = v20;
  v8 = 0LL;
  v15 = v20;
  v18 = 0LL;
  v9 = (char *)v21;
  v16 = (char *)v21;
  lpMem = 0LL;
  if ( !(unsigned __int8)sub_18001F768(a3, &v18, v20, 256LL) )
  {
    if ( v18 >= 0x100 )
    {
      v10 = sub_180021070(&v14);
      v8 = lpMem;
      if ( !v10 )
      {
LABEL_6:
        v11 = 0;
        goto LABEL_11;
      }
      v9 = v16;
      v7 = v15;
      v4 = v14;
    }
    if ( !(unsigned __int8)sub_18001F768(a3, &v18, v4, v9 - v4) )
      goto LABEL_6;
  }
  if ( &v4[v18] <= v9 )
    v7 = &v4[v18];
  AcquireSRWLockExclusive(SRWLock);
  v19 = a2;
  v11 = sub_18001CAEC((int)SRWLock + 136, (unsigned int)&v19, 4, (_DWORD)v4, v7 - v4, 1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_11:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v11;
}
