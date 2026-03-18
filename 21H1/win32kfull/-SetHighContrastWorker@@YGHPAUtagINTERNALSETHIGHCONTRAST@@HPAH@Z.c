/*
 * XREFs of ?SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z @ 0x14544F
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge SetHighContrastWorker@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagINTERNALSETHIGHCONTRAST *a3,
        int a4,
        int *a5)
{
  int v5; // edi
  struct tagINTERNALSETHIGHCONTRAST *v7; // edx
  size_t v8; // eax
  size_t v9; // esi
  const void *v11; // ecx
  unsigned int v12; // esi
  int ProfileUserName; // edi
  int v14; // esi
  int v15; // eax
  BOOL v16; // eax
  int v17; // eax
  unsigned int v18; // [esp+0h] [ebp-198h]
  const unsigned __int16 *v19; // [esp+4h] [ebp-194h]
  _BYTE v20[12]; // [esp+10h] [ebp-188h] BYREF
  int v21; // [esp+24h] [ebp-174h]
  struct tagINTERNALSETHIGHCONTRAST *v22; // [esp+28h] [ebp-170h]
  unsigned __int16 v23[128]; // [esp+2Ch] [ebp-16Ch] BYREF
  unsigned __int16 v24[42]; // [esp+12Ch] [ebp-6Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+180h] [ebp-18h]

  v5 = a1;
  v21 = a1;
  v7 = a3;
  v22 = a3;
  v8 = *(unsigned __int16 *)(a2 + 8);
  v9 = v8;
  if ( (unsigned __int16)v8 >= 0x100u )
    return 0;
  v11 = *(const void **)(a2 + 12);
  if ( v11 )
  {
    ms_exc.registration.TryLevel = 0;
    v9 = v8;
    memcpy(v23, v11, v8);
    ms_exc.registration.TryLevel = -2;
    v7 = v22;
  }
  v12 = v9 & 0xFFFFFFFE;
  if ( v12 >= 0x100 )
    __report_rangecheckfailure();
  *(unsigned __int16 *)((char *)v23 + v12) = 0;
  if ( v5 )
  {
    memset(v20, 0, sizeof(v20));
    ProfileUserName = CreateProfileUserName(v20);
    RtlStringCchPrintfW(v24, 0x28u, L"%d", *(_DWORD *)(a2 + 4));
    v14 = FastWriteProfileStringW(ProfileUserName, 29, L"Flags", v24);
    *(_DWORD *)v22 = v14;
    if ( *(_DWORD *)(a2 + 12) )
      v14 &= FastWriteProfileStringW(ProfileUserName, 29, L"High Contrast Scheme", v23);
    FreeProfileUserName(ProfileUserName, v20);
    v5 = v21;
    v7 = v22;
  }
  else
  {
    *(_DWORD *)v7 = 1;
    v14 = 0;
  }
  if ( *(_DWORD *)v7 )
  {
    v21 = _gHighContrast[0];
    v22 = (struct tagINTERNALSETHIGHCONTRAST *)_gHighContrast[1];
    if ( *(_DWORD *)(a2 + 12) )
      RtlStringCchCopyW(128, _gHighContrastDefaultScheme, v23, v18, v19);
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(a2 + 4) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v15 = *(_DWORD *)(a2 + 4);
    if ( (v15 & 0x1000) == 0 )
    {
      if ( (v15 & 1) != 0 )
      {
        v16 = v5 == 0;
        if ( ((unsigned __int8)v22 & 1) != 0 )
          v17 = 4 * v16 + 10;
        else
          v17 = 4 * v16 + 8;
      }
      else
      {
        v17 = 4 * (v5 == 0) + 9;
      }
      PostWinlogonMessage(1026, v17);
    }
  }
  return v14;
}
