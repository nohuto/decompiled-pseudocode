/*
 * XREFs of sub_1800989D9 @ 0x1800989D9
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800FA018 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 */

void __fastcall sub_1800989D9(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char *pv,
        PropertyChangedContext *a8,
        int a9,
        __int64 a10)
{
  unsigned int v10; // esi
  unsigned int v11; // edx
  PropertyChangedContext *v12; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  CAudioSessionManager *v15; // rcx

  v10 = a6;
  if ( a6 >= 0 )
  {
    v12 = a8;
    *(_OWORD *)(pv + 8) = *(_OWORD *)a10;
    *((_DWORD *)pv + 6) = *(_DWORD *)(a10 + 16);
    ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandlePropertyValueChanged, pv, 0LL);
    *((_QWORD *)pv + 5) = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      v12 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
      {
LABEL_12:
        if ( (v10 & 0x80000000) != 0
          && v15 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v15 + 7) & 0x800000) != 0
          && *((_BYTE *)v15 + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)v15 + 2), 38LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v10);
        }
        if ( v12 )
          PropertyChangedContext::`scalar deleting destructor'(v12, v11);
        JUMPOUT(0x180035866LL);
      }
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v10);
    }
  }
  else
  {
    PropertyChangedContext::`scalar deleting destructor'((PropertyChangedContext *)pv, a2);
    v12 = a8;
  }
  v15 = WPP_GLOBAL_Control;
  goto LABEL_12;
}
