/*
 * XREFs of RtlLoadString @ 0x180053B40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        void *a1,
        unsigned __int16 a2,
        const WCHAR *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  __int64 v9; // r12
  char v11; // si
  int v12; // edx
  unsigned __int16 v13; // cx
  int v14; // ebx
  __int16 v15; // r8
  int v17; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp-58h]
  _QWORD v22[4]; // [rsp+68h] [rbp-50h] BYREF

  v8 = (unsigned int)a3;
  v9 = a2;
  v21 = a5;
  v19 = 0LL;
  v11 = a4 & 1;
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( v11 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 <= 0xFFFF )
      goto LABEL_8;
    if ( *a3 )
    {
      if ( (int)RtlLocaleNameToLcid(a3, &v17, 3) < 0 )
        return 3221225485LL;
      v8 = (unsigned __int16)v17;
      v17 = (unsigned __int16)v17;
    }
    else
    {
      v8 = 0;
      v17 = 0;
    }
LABEL_8:
    v22[0] = 6LL;
    v22[1] = ((unsigned int)v9 >> 4) + 1;
    v22[2] = v8;
    v22[3] = v9;
    v18 = 0LL;
    if ( v11 )
    {
      v12 = LdrpSearchResourceSection_U((unsigned __int64)a1, (__int64)v22, 4u, 1u, (__int64 *)&v20);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v12 = LdrpAccessResourceData((__int64)a1, v20, (__int64)&v19, 0LL);
    }
    else
    {
      v12 = LdrResSearchResource(a1, (__int64)&v19, (__int64)&v18, a7, a8);
      if ( v12 >= 0 && v18 > 0xFFFF )
        v12 = -1073741701;
    }
    if ( v12 >= 0 && v19 )
    {
      v13 = 0;
      v14 = v9 & 0xF;
      v18 >>= 1;
      do
      {
        v15 = *(_WORD *)(v19 + 2LL * v13);
        v13 += v15 + 1;
        if ( !v11 && v13 > v18 )
          return (unsigned int)-1073741701;
        --v14;
      }
      while ( v14 >= 0 );
      if ( v13 && v15 )
        v13 -= v15;
      *v21 = v19 + 2LL * v13;
      if ( a6 )
        *a6 = v15;
    }
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
