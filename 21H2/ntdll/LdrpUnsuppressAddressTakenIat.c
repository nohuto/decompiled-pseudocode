/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x18005424C
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005411C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800544DC (LdrpDoPostSnapWork.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180054404 (RtlValidateUserCallTarget.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008F4C0 (bsearch_s.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *BaseOfImage, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *Config; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r12
  char v17[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v20; // [rsp+48h] [rbp-28h]
  __int128 Key; // [rsp+50h] [rbp-20h] BYREF

  Context = 0LL;
  v20 = BaseOfImage;
  v5 = BaseOfImage;
  v6 = 0;
  Key = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( Config )
  {
    if ( *Config >= 0xB0u )
    {
      if ( *((_QWORD *)Config + 21) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = Config[36];
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = (unsigned int *)*((_QWORD *)Config + 20);
            v10 = (unsigned int)Config[42];
            v11 = (v8 >> 28) + 4;
            if ( !a2 )
              a2 = *v9;
            v12 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( a2 <= v12 && *v9 <= a3 && a3 >= a2 )
            {
              if ( *v9 >= a2 )
                goto LABEL_14;
              LODWORD(Key) = a2;
              Context = v9;
              if ( bsearch_s(&Key, v9, v10, v11, LdrpTargetCompare, &Context) || a2 != a3 )
              {
                v9 = Context;
LABEL_14:
                LODWORD(v13) = 0;
                while ( (unsigned int)v13 < a3 && (unsigned int)v13 < v12 )
                {
                  v14 = v13;
                  v13 = *v9;
                  if ( v14 >= (unsigned int)v13 )
                    return (unsigned int)-1073741701;
                  v15 = *(_QWORD *)&v5[v13];
                  if ( (unsigned int)RtlValidateUserCallTarget(v15, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = RtlGuardGrantSuppressedCallAccess(v15, 4u, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v9 = (unsigned int *)((char *)v9 + v11);
                }
                return v6;
              }
            }
            return 0LL;
          }
        }
      }
    }
  }
  return v6;
}
