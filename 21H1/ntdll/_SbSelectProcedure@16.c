/*
 * XREFs of _SbSelectProcedure@16 @ 0x4B2B82A0
 * Callers:
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _SbExecuteProcedure@20 @ 0x4B385EB0 (_SbExecuteProcedure@20.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _SbpUpdateCache@16 @ 0x4B2B8498 (_SbpUpdateCache@16.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _SbpTraceContextUpdate@24 @ 0x4B385D98 (_SbpTraceContextUpdate@24.c)
 *     _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA (_SbpUpdateCacheWithCurrentImpl@8.c)
 */

int __stdcall SbSelectProcedure(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *pShimData; // eax
  _DWORD *v5; // esi
  char *v6; // ecx
  char *v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // esi
  char *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  _WORD *v18; // ecx
  _WORD *v20; // ecx
  const unsigned __int16 *v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // edx
  signed __int64 v24; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  _WORD *v26; // edi
  _WORD *v27; // ecx
  _WORD *v29; // edi
  char *v30; // ecx
  __int16 v31; // ax
  size_t v32; // [esp-4h] [ebp-144h]
  size_t v33; // [esp-4h] [ebp-144h]
  _WORD *v34; // [esp+10h] [ebp-130h]
  volatile signed __int64 *v35; // [esp+10h] [ebp-130h]
  unsigned int v36; // [esp+10h] [ebp-130h]
  unsigned __int16 v37; // [esp+14h] [ebp-12Ch] BYREF
  unsigned __int16 v38; // [esp+18h] [ebp-128h] BYREF
  _DWORD *v39; // [esp+1Ch] [ebp-124h]
  ULONGLONG v40; // [esp+20h] [ebp-120h] BYREF
  unsigned __int16 v41; // [esp+28h] [ebp-118h] BYREF
  unsigned __int16 v42; // [esp+2Ch] [ebp-114h] BYREF
  REGHANDLE RegHandle; // [esp+30h] [ebp-110h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+38h] [ebp-108h] BYREF
  unsigned __int16 *v45; // [esp+48h] [ebp-F8h]
  int v46; // [esp+4Ch] [ebp-F4h]
  int v47; // [esp+50h] [ebp-F0h]
  int v48; // [esp+54h] [ebp-ECh]
  _WORD *v49; // [esp+58h] [ebp-E8h]
  int v50; // [esp+5Ch] [ebp-E4h]
  int v51; // [esp+60h] [ebp-E0h]
  int v52; // [esp+64h] [ebp-DCh]
  unsigned __int16 *v53; // [esp+68h] [ebp-D8h]
  int v54; // [esp+6Ch] [ebp-D4h]
  int v55; // [esp+70h] [ebp-D0h]
  int v56; // [esp+74h] [ebp-CCh]
  const unsigned __int16 *v57; // [esp+78h] [ebp-C8h]
  int v58; // [esp+7Ch] [ebp-C4h]
  int v59; // [esp+80h] [ebp-C0h]
  int v60; // [esp+84h] [ebp-BCh]
  _EVENT_DATA_DESCRIPTOR v61; // [esp+B8h] [ebp-88h] BYREF
  unsigned __int16 *v62; // [esp+C8h] [ebp-78h]
  int v63; // [esp+CCh] [ebp-74h]
  int v64; // [esp+D0h] [ebp-70h]
  int v65; // [esp+D4h] [ebp-6Ch]
  _WORD *v66; // [esp+D8h] [ebp-68h]
  int v67; // [esp+DCh] [ebp-64h]
  int v68; // [esp+E0h] [ebp-60h]
  int v69; // [esp+E4h] [ebp-5Ch]
  unsigned __int16 *v70; // [esp+E8h] [ebp-58h]
  int v71; // [esp+ECh] [ebp-54h]
  int v72; // [esp+F0h] [ebp-50h]
  int v73; // [esp+F4h] [ebp-4Ch]
  _WORD *v74; // [esp+F8h] [ebp-48h]
  int v75; // [esp+FCh] [ebp-44h]
  int v76; // [esp+100h] [ebp-40h]
  int v77; // [esp+104h] [ebp-3Ch]
  _BYTE v78[52]; // [esp+108h] [ebp-38h] BYREF

  pShimData = NtCurrentPeb()->pShimData;
  v5 = *(_DWORD **)(a3 + 8);
  if ( pShimData )
  {
    v6 = (char *)(pShimData + 504);
    if ( pShimData != (_DWORD *)-2016 )
    {
      if ( pShimData[516] )
      {
        v7 = (char *)NtCurrentPeb()->pShimData;
        if ( v7 && (v8 = (int *)(v7 + 2016)) != 0 && v8[12] )
        {
          v9 = *v8;
          v10 = v8[1];
        }
        else
        {
          v9 = 0;
          v10 = 0;
        }
        if ( v9 == *v5 && v10 == v5[1] )
        {
          v11 = a2;
          if ( a2 == v5[2] )
            goto LABEL_11;
        }
        else
        {
          v11 = a2;
        }
        if ( !SbpUpdateCache(v6 + 24, v11) )
          return 0;
        goto LABEL_11;
      }
    }
  }
  SbpUpdateCacheWithCurrentImpl(*(_DWORD *)(a3 + 8), a3);
LABEL_11:
  if ( a4 < v5[3] )
  {
    _mm_lfence();
    LODWORD(v32) = 128;
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 4 * a4 + 4);
    memset(&UserData, 0, v32);
    RegHandle = 0LL;
    v37 = 0;
    v38 = 0;
    if ( *(_DWORD *)(v12 + 24) && SbObtainTraceHandle(&RegHandle) && RegHandle )
    {
      v18 = *(_WORD **)v12;
      UserData.Ptr = (unsigned int)(v12 + 32);
      UserData.Size = 16;
      UserData.Reserved = 0;
      v34 = v18 + 1;
      while ( *v18++ )
        ;
      v46 = 0;
      v47 = 2;
      v48 = 0;
      v50 = 0;
      v37 = 2 * (v18 - v34) + 2;
      v45 = &v37;
      v20 = *(_WORD **)v12;
      v21 = *(const unsigned __int16 **)(v12 + 4);
      v49 = v20;
      v51 = v37;
      v52 = 0;
      v54 = 0;
      v55 = 2;
      v56 = 0;
      v57 = v21;
      v38 = 2 * wcslen(v21) + 2;
      v59 = v38;
      v53 = &v38;
      v58 = 0;
      v60 = 0;
      EtwEventWrite(RegHandle, &AeSbCallEvent, 5u, &UserData);
    }
    v13 = (_DWORD *)v5[a4 + 4];
    LODWORD(v33) = 48;
    v39 = v13;
    memset(v78, 0, v33);
    if ( !v13[6] )
      return v13[1];
    v40 = 0LL;
    v14 = (char *)NtCurrentPeb()->pShimData;
    if ( !v14 )
      return v13[1];
    v15 = v14 + 2016;
    if ( !v15 )
      return v13[1];
    v16 = v15 + 12;
    if ( !v15[12] || !v15[3] )
      return v13[1];
    v22 = v15[4];
    v35 = (volatile signed __int64 *)(v15 + 4);
    v23 = v15[5];
    if ( !*((_QWORD *)v15 + 2) )
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0, 0, &v40) )
        return v13[1];
      v24 = _InterlockedCompareExchange64(v35, v40, 0LL);
      v13 = v39;
      v36 = HIDWORD(v24);
      v22 = v24;
      if ( v24 )
      {
        EtwNotificationUnregister(v40, 0);
      }
      else
      {
        v36 = HIDWORD(v40);
        v22 = v40;
        ProcessParameters = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(
          v16,
          0,
          v40,
          HIDWORD(v40),
          ProcessParameters->ImagePathName.Length,
          ProcessParameters->ImagePathName.Buffer);
      }
      v23 = v36;
    }
    if ( v23 | v22 )
    {
      v26 = (_WORD *)*v13;
      v27 = (_WORD *)*v13;
      v61.Ptr = (unsigned int)(v13 + 24);
      v61.Size = 16;
      v61.Reserved = 0;
      v39 = v27 + 1;
      while ( *v27++ )
        ;
      v66 = v26;
      v29 = (_WORD *)v13[3];
      v63 = 0;
      v64 = 2;
      v41 = 2 * (((char *)v27 - (char *)v39) >> 1) + 2;
      v62 = &v41;
      v30 = (char *)v29;
      v68 = v41;
      v65 = 0;
      v67 = 0;
      v69 = 0;
      v39 = v29 + 1;
      do
      {
        v31 = *(_WORD *)v30;
        v30 += 2;
      }
      while ( v31 );
      v71 = 0;
      v72 = 2;
      v73 = 0;
      v74 = v29;
      v42 = 2 * ((v30 - (char *)v39) >> 1) + 2;
      v76 = v42;
      v70 = &v42;
      v75 = 0;
      v77 = 0;
      EtwEventWrite(__PAIR64__(v23, v22), &AeSbImplEvent, 5u, &v61);
    }
    return v13[1];
  }
  return 0;
}
