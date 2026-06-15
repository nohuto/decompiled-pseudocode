/*
 * XREFs of ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x18000ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800273FC (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void __fastcall CDuckingManager::OnStreamCreatedInTsSession(CDuckingManager *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v5; // ebx
  struct TSSession *v6; // rsi
  float v7; // xmm3_4
  int v8; // ebx
  float v9; // xmm0_4
  int v10; // ecx
  int v11; // ecx
  struct TSSession *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = 1;
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v12) )
  {
    v6 = v12;
    if ( (int)RpcTryInitializeUserSettings(v12) >= 0 )
      v5 = *((_DWORD *)v6 + 80);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  v7 = 0.0;
  *((_DWORD *)this + 110) = v5;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        v9 = FLOAT_N6_0;
      else
        v9 = 0.0;
    }
    else
    {
      v9 = FLOAT_N18_0;
    }
  }
  else
  {
    v9 = FLOAT_N96_0;
  }
  *(float *)(*((_QWORD *)this + 58) + 8LL) = v9;
  v10 = *((_DWORD *)this + 110);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        v7 = FLOAT_N6_0;
    }
    else
    {
      v7 = FLOAT_N18_0;
    }
  }
  else
  {
    v7 = FLOAT_N96_0;
  }
  CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a2, L"Comm", v7);
}
