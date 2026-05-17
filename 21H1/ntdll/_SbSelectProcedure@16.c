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
  _WORD *v17; // ecx
  _WORD *v19; // ecx
  const unsigned __int16 *v20; // ebx
  int v21; // ebx
  int v22; // edx
  signed __int64 v23; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  _WORD *v25; // edi
  _WORD *v26; // ecx
  _WORD *v28; // edi
  char *v29; // ecx
  __int16 v30; // ax
  _WORD *v31; // [esp+10h] [ebp-130h]
  volatile signed __int64 *v32; // [esp+10h] [ebp-130h]
  int v33; // [esp+10h] [ebp-130h]
  unsigned __int16 v34; // [esp+14h] [ebp-12Ch] BYREF
  unsigned __int16 v35; // [esp+18h] [ebp-128h] BYREF
  _DWORD *v36; // [esp+1Ch] [ebp-124h]
  signed __int64 v37; // [esp+20h] [ebp-120h] BYREF
  unsigned __int16 v38; // [esp+28h] [ebp-118h] BYREF
  unsigned __int16 v39; // [esp+2Ch] [ebp-114h] BYREF
  __int64 v40; // [esp+30h] [ebp-110h] BYREF
  _DWORD v41[32]; // [esp+38h] [ebp-108h] BYREF
  _DWORD v42[33]; // [esp+B8h] [ebp-88h] BYREF

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
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 4 * a4 + 4);
    memset(v41, 0, sizeof(v41));
    v40 = 0LL;
    v34 = 0;
    v35 = 0;
    if ( *(_DWORD *)(v12 + 24) && SbObtainTraceHandle(&v40) && v40 )
    {
      v17 = *(_WORD **)v12;
      v41[0] = v12 + 32;
      v41[1] = 0;
      v41[2] = 16;
      v41[3] = 0;
      v31 = v17 + 1;
      while ( *v17++ )
        ;
      v41[5] = 0;
      v41[6] = 2;
      v41[7] = 0;
      v41[9] = 0;
      v34 = 2 * (v17 - v31) + 2;
      v41[4] = &v34;
      v19 = *(_WORD **)v12;
      v20 = *(const unsigned __int16 **)(v12 + 4);
      v41[8] = v19;
      v41[10] = v34;
      v41[11] = 0;
      v41[13] = 0;
      v41[14] = 2;
      v41[15] = 0;
      v41[16] = v20;
      v35 = 2 * wcslen(v20) + 2;
      v41[18] = v35;
      v41[12] = &v35;
      v41[17] = 0;
      v41[19] = 0;
      EtwEventWrite(v40, SWORD2(v40), AeSbCallEvent, 5, v41);
    }
    v13 = (_DWORD *)v5[a4 + 4];
    v36 = v13;
    memset(&v42[20], 0, 0x30u);
    if ( !v13[6] )
      return v13[1];
    v37 = 0LL;
    v14 = (char *)NtCurrentPeb()->pShimData;
    if ( !v14 )
      return v13[1];
    v15 = v14 + 2016;
    if ( !v15 || !v15[12] || !v15[3] )
      return v13[1];
    v21 = v15[4];
    v32 = (volatile signed __int64 *)(v15 + 4);
    v22 = v15[5];
    if ( !*((_QWORD *)v15 + 2) )
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0, 0, (int)&v37) )
        return v13[1];
      v23 = _InterlockedCompareExchange64(v32, v37, 0LL);
      v13 = v36;
      v33 = HIDWORD(v23);
      v21 = v23;
      if ( v23 )
      {
        EtwNotificationUnregister(v37, SWORD2(v37), 0);
      }
      else
      {
        v33 = HIDWORD(v37);
        v21 = v37;
        ProcessParameters = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(
          v37,
          HIDWORD(v37),
          ProcessParameters->ImagePathName.Length,
          ProcessParameters->ImagePathName.Buffer);
      }
      v22 = v33;
    }
    if ( v22 | v21 )
    {
      v25 = (_WORD *)*v13;
      v26 = (_WORD *)*v13;
      v42[0] = v13 + 24;
      v42[1] = 0;
      v42[2] = 16;
      v42[3] = 0;
      v36 = v26 + 1;
      while ( *v26++ )
        ;
      v42[8] = v25;
      v28 = (_WORD *)v13[3];
      v42[5] = 0;
      v42[6] = 2;
      v38 = 2 * (((char *)v26 - (char *)v36) >> 1) + 2;
      v42[4] = &v38;
      v29 = (char *)v28;
      v42[10] = v38;
      v42[7] = 0;
      v42[9] = 0;
      v42[11] = 0;
      v36 = v28 + 1;
      do
      {
        v30 = *(_WORD *)v29;
        v29 += 2;
      }
      while ( v30 );
      v42[13] = 0;
      v42[14] = 2;
      v42[15] = 0;
      v42[16] = v28;
      v39 = 2 * ((v29 - (char *)v36) >> 1) + 2;
      v42[18] = v39;
      v42[12] = &v39;
      v42[17] = 0;
      v42[19] = 0;
      EtwEventWrite(v21, v22, AeSbImplEvent, 5, v42);
    }
    return v13[1];
  }
  return 0;
}
