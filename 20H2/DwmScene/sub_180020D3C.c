/*
 * XREFs of sub_180020D3C @ 0x180020D3C
 * Callers:
 *     sub_18001EFFC @ 0x18001EFFC (sub_18001EFFC.c)
 *     sub_18001F0EC @ 0x18001F0EC (sub_18001F0EC.c)
 *     sub_18001F1DC @ 0x18001F1DC (sub_18001F1DC.c)
 *     sub_18001F2CC @ 0x18001F2CC (sub_18001F2CC.c)
 *     sub_18001F3BC @ 0x18001F3BC (sub_18001F3BC.c)
 *     sub_18001F4AC @ 0x18001F4AC (sub_18001F4AC.c)
 *     sub_18001F59C @ 0x18001F59C (sub_18001F59C.c)
 *     sub_18001F68C @ 0x18001F68C (sub_18001F68C.c)
 *     sub_18001F77C @ 0x18001F77C (sub_18001F77C.c)
 *     sub_18001F86C @ 0x18001F86C (sub_18001F86C.c)
 *     sub_18001F95C @ 0x18001F95C (sub_18001F95C.c)
 *     sub_18001FA4C @ 0x18001FA4C (sub_18001FA4C.c)
 *     sub_18001FB3C @ 0x18001FB3C (sub_18001FB3C.c)
 *     sub_18001FC2C @ 0x18001FC2C (sub_18001FC2C.c)
 *     sub_18001FD1C @ 0x18001FD1C (sub_18001FD1C.c)
 *     sub_18001FE0C @ 0x18001FE0C (sub_18001FE0C.c)
 *     sub_18001FEFC @ 0x18001FEFC (sub_18001FEFC.c)
 *     sub_1800B05DC @ 0x1800B05DC (sub_1800B05DC.c)
 *     sub_1800B06CC @ 0x1800B06CC (sub_1800B06CC.c)
 *     sub_1800B07BC @ 0x1800B07BC (sub_1800B07BC.c)
 *     sub_1800B08AC @ 0x1800B08AC (sub_1800B08AC.c)
 *     sub_1800B099C @ 0x1800B099C (sub_1800B099C.c)
 *     sub_1800B0A8C @ 0x1800B0A8C (sub_1800B0A8C.c)
 *     sub_1800B0B7C @ 0x1800B0B7C (sub_1800B0B7C.c)
 *     sub_1800B0C6C @ 0x1800B0C6C (sub_1800B0C6C.c)
 * Callees:
 *     sub_180020E58 @ 0x180020E58 (sub_180020E58.c)
 */

__int64 __fastcall sub_180020D3C(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 *v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( v6[4] >= v7 )
    {
      v4 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v4 == *a1 || v7 < v4[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_180020E58(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_18013B111,
                     (__int64)&v11);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v8;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
