/*
 * XREFs of MiAttemptPageFileExtension @ 0x1408D0464
 * Callers:
 *     MiExtendPagingFiles @ 0x1408D0790 (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x140543830 (MiFinishPageFileExtension.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rax
  unsigned __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _FILE_OBJECT *v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h]
  _QWORD FileInformation[3]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]

  v3 = *(_QWORD *)(a2 + 248);
  v23 = 0;
  v20 = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)v19 = 0LL;
  if ( *(_QWORD *)a2 != v5
    && (int)IopQueryXxxInformation(*(PADAPTER_OBJECT *)(a2 + 56), 3, 0x18u, 0, (struct _IRP *)v19, &v18, 0) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      v9 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)a2;
      v11 = i;
      if ( a3 >= i )
      {
        i = a3;
        v11 = 4096LL;
      }
      v12 = v9 - v10;
      if ( i <= v9 - v10 )
        v12 = i;
      v13 = v19[1] * (unsigned int)(v20 * HIDWORD(v20));
      if ( v13 <= 0x10000000 )
        break;
      v14 = (v13 - 0x10000000) >> 12;
      if ( v14 <= v12 )
        v12 = v14;
      if ( (*(_BYTE *)(a2 + 204) & 0x10) != 0 && v12 < a3 )
        break;
      FileInformation[0] = (v12 + v10) << 12;
      v15 = ~*(_BYTE *)(a1 + 79) & 0x20;
      FileInformation[2] = v9 << 12;
      FileInformation[1] = v10 << 12;
      v16 = *(struct _FILE_OBJECT **)(a2 + 56);
      v22 = (v15 | 8u) >> 3;
      if ( !IoSetInformation(v16, FileEndOfFileInformation, 0x20u, FileInformation) )
      {
        MiFinishPageFileExtension(v3, a2, v12);
        return v12;
      }
      if ( v11 == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
