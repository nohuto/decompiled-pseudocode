/*
 * XREFs of sub_18007268C @ 0x18007268C
 * Callers:
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180072364 @ 0x180072364 (sub_180072364.c)
 */

void sub_18007268C()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+70h] [rbp+27h] BYREF
  __int64 v5; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v6; // [rsp+80h] [rbp+37h] BYREF
  __int64 v7; // [rsp+88h] [rbp+3Fh] BYREF
  void *v8; // [rsp+90h] [rbp+47h] BYREF
  __int64 v9; // [rsp+98h] [rbp+4Fh] BYREF
  char v10; // [rsp+B8h] [rbp+6Fh] BYREF
  __int16 v11; // [rsp+C0h] [rbp+77h] BYREF
  int v12; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 9LL) )
    {
      v2 = *(_QWORD *)(v1 + 1320);
      v3 = *(_QWORD *)(v2 + 32);
      v5 = *(_QWORD *)(v1 + 128);
      v6 = *(_QWORD *)(v1 + 104);
      v11 = *(_WORD *)(v1 + 1376);
      v12 = *(_DWORD *)(v1 + 1336);
      v4 = *(_DWORD *)(v1 + 1288);
      v8 = (void *)(v2 + 88);
      v10 = *(_BYTE *)(v1 + 1280);
      v9 = *(_QWORD *)(v1 + 1752);
      v7 = v3;
      sub_180072364(
        v3,
        byte_18009D56B,
        v0,
        v1,
        (__int64)&v9,
        (__int64)&v10,
        &v8,
        (__int64)&v7,
        (__int64)&v4,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
