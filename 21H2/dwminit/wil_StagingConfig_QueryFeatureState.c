/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x180002E40
 * Callers:
 *     wil_QueryFeatureState @ 0x180002FCC (wil_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfig_Load @ 0x1800027B8 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x180002AC8 (wil_details_StagingConfig_QueryFeatureState.c)
 *     wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback @ 0x180002C84 (wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  int v7; // edi
  unsigned int FeatureState; // r12d
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v13; // r8d
  _DWORD *v14; // r9
  int v15; // eax
  unsigned int v16; // edx
  void *v17; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  LPVOID lpMem; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[208]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a3;
  FeatureState = 0;
  if ( (unsigned int)wil_details_StagingConfig_Load((__int64)v21, a1, a3, (__int64)v26) )
    return FeatureState;
  FeatureState = wil_details_StagingConfig_QueryFeatureState((__int64)v21, a2, v7, a4);
  if ( a5 )
  {
    v9 = v22;
    v10 = 1;
    v11 = v23;
    v12 = 0;
    v20[0] = 0;
    LOWORD(v13) = *(_WORD *)(v22 + 4);
    if ( (_WORD)v13 )
    {
      do
      {
        v14 = (_DWORD *)(v11 + 12LL * v12);
        if ( *v14 )
        {
          v15 = v14[1];
          if ( (v15 & 0x300) != 0
            || (v15 & 0xC00) != 0
            || (v15 & 0x3000) != 0
            || (v15 & 0x3F000000) != 0
            || (v15 & 2) != 0 )
          {
            if ( (v15 & 1) != 0 || (v16 = 0, !(_WORD)v13) )
            {
LABEL_15:
              if ( !(unsigned int)wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback(v11 + 12LL * v12, v20) )
                break;
            }
            else
            {
              while ( v16 == v12 || *v14 != *(_DWORD *)(v11 + 12LL * v16) )
              {
                if ( ++v16 >= (unsigned __int16)v13 )
                  goto LABEL_15;
              }
            }
          }
        }
        v13 = *(unsigned __int16 *)(v9 + 4);
        ++v12;
      }
      while ( v12 < v13 );
      if ( v20[0] )
        goto LABEL_21;
      v9 = v22;
    }
    if ( !*(_WORD *)(v9 + 6) )
      v10 = 0;
LABEL_21:
    *a5 |= v10;
  }
  if ( v25 )
  {
    v17 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v17);
  }
  return FeatureState;
}
