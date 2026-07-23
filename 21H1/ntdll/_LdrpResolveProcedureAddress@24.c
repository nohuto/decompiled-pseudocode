/*
 * XREFs of _LdrpResolveProcedureAddress@24 @ 0x4B306029
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpResolveDelayloadAddress@24 @ 0x4B32FA18 (_LdrpResolveDelayloadAddress@24.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3 (_RtlGuardCheckImageBase@8.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrpReleaseDllPath@4 @ 0x4B2DDF8A (_LdrpReleaseDllPath@4.c)
 *     _LdrpParseForwarderDescription@16 @ 0x4B2E5D96 (_LdrpParseForwarderDescription@16.c)
 *     _LdrpShouldModuleImportBeRedirected@4 @ 0x4B2E8DE5 (_LdrpShouldModuleImportBeRedirected@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 */

int __fastcall LdrpResolveProcedureAddress(int a1, char **a2, int a3, int a4, char a5, char **a6)
{
  const char *v6; // esi
  char **v7; // edi
  int v8; // ecx
  char ShouldModuleImportBeRedirected; // cl
  ULONG v10; // eax
  char *v11; // eax
  int ProcedureAddress; // eax
  int v13; // esi
  unsigned int v14; // eax
  char *v16; // ecx
  char v17; // [esp+Fh] [ebp-79h]
  unsigned int v19; // [esp+14h] [ebp-74h]
  PVOID BaseAddress; // [esp+1Ch] [ebp-6Ch] BYREF
  int v22; // [esp+20h] [ebp-68h] BYREF
  ULONG Value; // [esp+24h] [ebp-64h] BYREF
  ANSI_STRING v24; // [esp+28h] [ebp-60h] BYREF
  int v25[21]; // [esp+30h] [ebp-58h] BYREF

  v19 = 0;
  v6 = (const char *)a3;
  v7 = a2;
  Value = a4;
  v22 = a3;
  v8 = (int)a2[10];
  BaseAddress = a2;
  LdrpInitializeDllPath(v8, 1, v25);
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v10 = a4;
  v17 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected && v6 )
    {
      v11 = (char *)LdrpCheckRedirection(v6);
      if ( v11 != (char *)-4530927 )
      {
        *a6 = v11;
        return 0;
      }
      v10 = a4;
    }
    ProcedureAddress = LdrpGetProcedureAddress(v7[6], v6, v10, a6);
    v13 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v14 = v19++;
    if ( v14 >= 0x20 || (a5 & 2) != 0 )
    {
      v13 = -1073741701;
      goto LABEL_20;
    }
    v13 = LdrpParseForwarderDescription(*a6, (int)&v24, (char **)&v22, &Value);
    if ( v13 < 0 )
      goto LABEL_20;
    v25[3] = (int)v7[38];
    v13 = LdrpLoadForwardedDll(&v24, (int)v25, (int)a2, (int)v7, 2, &BaseAddress);
    if ( v13 < 0 )
      goto LABEL_20;
    v7 = (char **)BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    v10 = Value;
    v6 = (const char *)v22;
    ShouldModuleImportBeRedirected = v17;
    a4 = Value;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
      v16 = v7[24];
    else
      v16 = v7[6];
    RtlGuardCheckImageBase(v16);
  }
LABEL_20:
  LdrpReleaseDllPath((int)v25);
  if ( v13 < 0 )
    *a6 = 0;
  return v13;
}
