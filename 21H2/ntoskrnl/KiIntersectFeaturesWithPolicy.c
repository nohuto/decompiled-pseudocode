/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x1409A1A60
 * Callers:
 *     KiInitializeXSave @ 0x14099CC40 (KiInitializeXSave.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x1403BBDEC (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x1409A1BC0 (KiIsXSaveFeatureAllowed.c)
 *     KiLoadPolicyFromImage @ 0x1409A1C50 (KiLoadPolicyFromImage.c)
 */

__int64 __fastcall KiIntersectFeaturesWithPolicy(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v5; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  char IsXSaveFeatureAllowed; // al
  unsigned int v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]

  result = 0LL;
  v4 = 0;
  v20 = 0LL;
  v5 = 0LL;
  LODWORD(v15) = 0;
  v19 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( *a2 )
  {
    result = KiLoadPolicyFromImage(a1, &v16, &v17);
    if ( (_DWORD)result == -1073741204 )
    {
      *((_DWORD *)a2 + 5) &= 0xFFFFFFFC;
      *a2 = 0LL;
      a2[67] = 0LL;
    }
    else
    {
      KiGetProcessorInformation(&v19, (_DWORD *)&v19 + 3, &v15, &v14);
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = a2[67];
      v8 = *a2;
      v9 = *a2 | v7;
      v18 = v7;
      result = CurrentPrcb->UpdateSignature.QuadPart;
      v20 = result;
      if ( v9 )
      {
        v10 = v16;
        do
        {
          if ( v4 >= 0x40 )
            break;
          if ( (v9 & 1) != 0 )
          {
            result = *(_QWORD *)(v10 + 16);
            if ( _bittest64(&result, v4) )
            {
              result = *(unsigned int *)(v10 + 24);
              v11 = 0;
              v14 = result;
              if ( (_DWORD)result )
              {
                v12 = v14;
                result = v10 + 32;
                v15 = v10 + 32;
                do
                {
                  if ( *(_DWORD *)result == v4 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v10, v11, CurrentPrcb, &v19);
                    v12 = v14;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v5, v4);
                    result = v15;
                  }
                  result += 16LL;
                  ++v11;
                  v15 = result;
                }
                while ( v11 < v12 );
              }
            }
          }
          ++v4;
          v9 >>= 1;
        }
        while ( v9 );
        v7 = v18;
      }
      *a2 = v5 & v8;
      a2[67] = v5 & v7;
    }
  }
  return result;
}
