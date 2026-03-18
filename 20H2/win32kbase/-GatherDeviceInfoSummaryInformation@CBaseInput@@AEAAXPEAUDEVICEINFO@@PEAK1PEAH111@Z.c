/*
 * XREFs of ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C0022D5C
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C00233D4 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C002D784 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C00CB4AC (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 */

void __fastcall CBaseInput::GatherDeviceInfoSummaryInformation(
        CBaseInput *this,
        struct DEVICEINFO *a2,
        unsigned int *a3,
        unsigned int *a4,
        int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v9; // eax
  struct DEVICEINFO *v10; // rbx
  __int16 v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // eax
  CKeyboardProcessor *v14; // rcx
  __int64 v15; // rax
  char v16; // [rsp+28h] [rbp-10h]

  v9 = *((unsigned __int8 *)a2 + 48);
  v10 = a2;
  if ( *((_QWORD *)a2 + 28) )
  {
    if ( (_BYTE)v9 )
    {
      if ( v9 == 1 )
      {
        if ( anonymous_namespace_::GetKeyboardProcessor((unsigned int)(v9 - 1), a2, a3, a4) )
          CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v14, v10, a7);
      }
      else if ( v9 == 2 )
      {
        if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
        {
          v15 = *((_QWORD *)a2 + 60);
          if ( v15 )
          {
            if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 1) <= 6 )
              ++*a3;
          }
        }
        ++*a8;
      }
    }
    else
    {
      v11 = *((_WORD *)a2 + 232);
      ++*a3;
      v12 = *((unsigned __int16 *)a2 + 233);
      v13 = *a6;
      if ( *a6 <= v12 )
        v13 = v12;
      *a6 = v13;
      if ( v11 < 0 )
      {
        v11 &= ~0x8000u;
        *a5 = 1;
      }
      if ( v11 == 32 || v11 == 64 || v11 == 256 )
        ++*a4;
    }
  }
  else if ( (_BYTE)v9 == 2 )
  {
    ++*a8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        3,
        21,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
        v16);
    }
  }
}
