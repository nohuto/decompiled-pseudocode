/*
 * XREFs of sub_180039910 @ 0x180039910
 * Callers:
 *     sub_18003911C @ 0x18003911C (sub_18003911C.c)
 *     sub_1800394DC @ 0x1800394DC (sub_1800394DC.c)
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 *     sub_180039810 @ 0x180039810 (sub_180039810.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180039910(__int16 *a1, const void **a2, unsigned __int64 a3)
{
  char *v4; // r8
  unsigned __int16 v7; // ax
  char *v8; // rcx
  char result; // al
  char *v10; // rbp
  char *v11; // rbp
  unsigned __int16 Destination; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)a1 + 2) == 1 )
  {
    v10 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v4;
    memcpy_s(&Destination, 2uLL, v4, 2uLL);
    *((_DWORD *)a1 + 1) = Destination;
    goto LABEL_8;
  }
  if ( *((_BYTE *)a1 + 2) == 2 )
  {
    v10 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v4;
    memcpy_s(a1 + 2, 4uLL, v4, 4uLL);
LABEL_8:
    v4 = v10;
  }
  v7 = *a1;
  a1[4] = *a1;
  if ( !v7 )
  {
    v11 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    memcpy_s(a1 + 4, 2uLL, v4, 2uLL);
    v7 = a1[4];
    v4 = v11;
  }
  v8 = &v4[v7];
  if ( (unsigned __int64)v8 <= a3 )
  {
    *((_QWORD *)a1 + 3) = v4;
    result = 1;
    *a2 = v8;
    return result;
  }
  return 0;
}
