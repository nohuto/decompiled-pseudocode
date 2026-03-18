/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00105A0
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C000F300 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ @ 0x1C0159A10 (-Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C021F4D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C02735E0 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  struct _FONTHASH **v12; // rcx
  __int64 v13; // r12
  struct _FONTHASH *v14; // rdi
  struct _EPROCESS *v15; // r12
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned int j; // edi
  int i; // [rsp+30h] [rbp-61h]
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  struct _EPROCESS *v27; // [rsp+50h] [rbp-41h]
  struct _EPROCESS *CurrentProcess; // [rsp+58h] [rbp-39h]
  __int64 v29; // [rsp+60h] [rbp-31h]
  _KAPC_STATE ApcState; // [rsp+68h] [rbp-29h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  *a5 = 0;
  v27 = PROCESS;
  if ( a2 )
    memset(a6, 0, 8LL * a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v26 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = gpPFTPublic;
  v13 = 0LL;
  for ( i = 0; (unsigned int)v13 < *((_DWORD *)gpPFTPublic + 6); i = v13 )
  {
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
      break;
    v14 = v12[v13 + 5];
    if ( v14 )
    {
      v15 = v27;
      do
      {
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
          break;
        if ( !(unsigned int)Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled()
          || *((_QWORD *)v14 + 10) )
        {
          v16 = *((_DWORD *)v14 + 13);
          if ( (v16 & 8) == 0 && (v16 & 0x200) == 0 )
          {
            if ( ++*a4 == -1 )
              goto LABEL_18;
            v17 = *((_DWORD *)v14 + 8);
            v18 = -1;
            v19 = v17 + *a5;
            if ( v19 >= v17 )
              v18 = v17 + *a5;
            *a5 = v18;
            if ( v19 < v17 )
LABEL_18:
              v7 = -1073741675;
            if ( a2 && v7 >= 0 )
            {
              if ( *a4 > a2 || *a5 > a3 )
                v7 = -1073741789;
              if ( v7 >= 0 )
              {
                v7 = PffDuplicateFileHandle(v14, CurrentProcess, v15, &a6[*a4 - 1]);
                if ( v7 < 0 )
                {
                  if ( (unsigned int)dword_1C032B3F8 > 5
                    && (qword_1C032B408 & 0x200000000000LL) != 0
                    && (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
                  {
                    v20 = **((_QWORD **)v14 + 25);
                    v29 = *(_QWORD *)(v20 + 80);
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                      v20,
                      &unk_1C02F3464);
                  }
                }
                else
                {
                  memmove(a7, *(const void **)(**((_QWORD **)v14 + 25) + 80LL), 2LL * *((unsigned int *)v14 + 8));
                  a7 += *((unsigned int *)v14 + 8);
                }
              }
            }
          }
        }
        v14 = (struct _FONTHASH *)*((_QWORD *)v14 + 1);
      }
      while ( v14 );
      LODWORD(v13) = i;
    }
    v12 = gpPFTPublic;
    v13 = (unsigned int)(v13 + 1);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( j = 0; j < a2; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++j;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return (unsigned int)v7;
}
