/*
 * XREFs of LdrpResolveProcedureAddress @ 0x1800303F4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x180087BEC (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18001427C (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardCheckImageBase @ 0x180074B68 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x180075AC4 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     LdrpCheckRedirection @ 0x1800D52D0 (LdrpCheckRedirection.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  char ShouldModuleImportBeRedirected; // al
  __int64 v13; // rax
  int ProcedureAddress; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int ForwardedDll; // ebx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v23; // rdi
  char v24; // [rsp+30h] [rbp-D0h]
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31[16]; // [rsp+70h] [rbp-90h] BYREF

  v6 = *(_QWORD *)(a2 + 80);
  v7 = a3;
  v29 = a2;
  v9 = a2;
  v28 = a1;
  v10 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a4;
  v11 = 0;
  memset(v31, 0, sizeof(v31));
  v31[4] = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v24 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v13 = LdrpCheckRedirection(v28, v9, v7);
        if ( v13 != -4530927 )
        {
          *a6 = v13;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), v7, v10, a6);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v18 = v11++;
    if ( v18 >= 0x20 || (a5 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_13;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a6, &v30, &v27, &v25);
    if ( ForwardedDll < 0 )
      goto LABEL_13;
    LODWORD(v31[3]) = *(_DWORD *)(v9 + 272);
    ForwardedDll = LdrpLoadForwardedDll((__int64)&v30, (int)v31, v29, v9, 2, (__int64)&v26);
    if ( ForwardedDll < 0 )
      goto LABEL_13;
    v9 = v26;
    LdrpDereferenceModule(v26, v19, v20, v21);
    ShouldModuleImportBeRedirected = v24;
    v7 = v27;
    v10 = v25;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      LOBYTE(v15) = 1;
      RtlGuardCheckImageBase(*(_QWORD *)(v9 + 184), v15);
    }
    else
    {
      v23 = *(_QWORD *)(v9 + 48);
      if ( (unsigned int)LdrControlFlowGuardEnforced(v16) )
      {
        if ( v23 < *((_QWORD *)&xmmword_180181510 + 1)
          || v23 >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
        {
          RtlpxLookupFunctionTable(v23, &v30);
        }
        else
        {
          v30 = xmmword_180181510;
        }
        if ( *((_QWORD *)&v30 + 1) != v23 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_13:
  if ( BYTE4(v31[15]) )
    RtlReleasePath(v31[0]);
  if ( ForwardedDll < 0 )
    *a6 = 0LL;
  return (unsigned int)ForwardedDll;
}
