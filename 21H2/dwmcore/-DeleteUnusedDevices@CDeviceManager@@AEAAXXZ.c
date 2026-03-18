/*
 * XREFs of ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180080D70
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18007F334 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800F86D8 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

void __fastcall CDeviceManager::DeleteUnusedDevices(CDeviceManager *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // r14

  EnterCriticalSection(&stru_1803D75A8);
  v2 = *((_QWORD *)&xmmword_1803D75D0 + 1);
  v1 = (_QWORD *)xmmword_1803D75D0;
  while ( v1 != (_QWORD *)v2 )
  {
    v3 = *v1;
    if ( *(int *)(*v1 + 1088LL) >= 0
      && (*(_DWORD *)(v3 + 8) != 1
       || *(_DWORD *)(*(_QWORD *)(v3 + 184) + 16LL)
       || *(_DWORD *)(v3 + 1176)
       || (CurrentFrameId = GetCurrentFrameId(), CurrentFrameId < *(_QWORD *)(v5 + 1496))) )
    {
      v1 += 2;
    }
    else
    {
      v6 = v1 + 2;
      if ( v1 + 2 != (_QWORD *)v2 )
      {
        v7 = v1;
        do
        {
          if ( v7 != v6 )
          {
            ReleaseInterface<CD3DDevice>(v7);
            *v7 = *v6;
            *((_BYTE *)v7 + 8) = *((_BYTE *)v7 + 24);
            *v6 = 0LL;
          }
          v6 += 2;
          v7 += 2;
        }
        while ( v6 != (_QWORD *)v2 );
        v2 = *((_QWORD *)&xmmword_1803D75D0 + 1);
      }
      ReleaseInterface<CD3DDevice>(v2 - 16);
      v2 = *((_QWORD *)&xmmword_1803D75D0 + 1) - 16LL;
      *((_QWORD *)&xmmword_1803D75D0 + 1) -= 16LL;
    }
  }
  LeaveCriticalSection(&stru_1803D75A8);
}
