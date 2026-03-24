/*
 * XREFs of ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800DDD58
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800DDCC0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CConnection::StartCompositionThread(CConnection *this, int nPriority)
{
  signed int v3; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  __int64 v7; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int LastError; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  ThreadId = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 4) = EventW;
  if ( EventW )
  {
    v6 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CConnection::CompositionThreadEntryPoint, this, 4u, &ThreadId);
    *((_QWORD *)this + 3) = v6;
    if ( v6 )
    {
      SetThreadDescription(v6, L"DWM Compositor Thread");
      SetLastError(0);
      if ( SetThreadPriority(*((HANDLE *)this + 3), nPriority) )
      {
        SetLastError(0);
        if ( ResumeThread(*((HANDLE *)this + 3)) == -1 )
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          if ( v3 >= 0 )
            v3 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x9Du, 0LL);
        }
        else
        {
          Handles[0] = *((HANDLE *)this + 3);
          Handles[1] = *((HANDLE *)this + 4);
          SetLastError(0);
          if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
          {
            v15 = GetLastError();
            v3 = v15;
            if ( v15 > 0 )
              v3 = (unsigned __int16)v15 | 0x80070000;
            if ( v3 >= 0 )
              v3 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v3, 0xA1u, 0LL);
          }
        }
      }
      else
      {
        v11 = GetLastError();
        v3 = v11;
        if ( v11 > 0 )
          v3 = (unsigned __int16)v11 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0x9Au, 0LL);
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x95u, 0LL);
    }
  }
  else
  {
    v9 = GetLastError();
    v3 = v9;
    if ( v9 > 0 )
      v3 = (unsigned __int16)v9 | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x8Du, 0LL);
  }
  return (unsigned int)v3;
}
