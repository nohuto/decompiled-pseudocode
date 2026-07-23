/*
 * XREFs of KiIpiEnlightenedGuestPriorityKick @ 0x140269334
 * Callers:
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 */

_UNKNOWN **__fastcall KiIpiEnlightenedGuestPriorityKick(__int64 a1)
{
  _UNKNOWN **result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  int *v6; // rax
  int v7; // edx
  int v8; // eax
  bool v9; // zf
  _DWORD *SchedulerAssist; // rdx
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+32h] [rbp-16h]
  __int16 v15; // [rsp+36h] [rbp-12h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  v15 = 0;
  v17 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    result = (_UNKNOWN **)KeIsEmptyAffinityEx(a1);
    if ( !(_DWORD)result )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v12[0] = a1;
      v12[1] = v4;
      v13 = 0;
      while ( 1 )
      {
        result = (_UNKNOWN **)KeEnumerateNextProcessor(&v17, v12);
        if ( (_DWORD)result )
          break;
        v5 = KiProcessorBlock[v17];
        if ( (struct _KPRCB *)v5 != CurrentPrcb && (KiVelocityFlags & 2) != 0 )
        {
          v6 = *(int **)(v5 + 33976);
          if ( v6 )
          {
            if ( CurrentPrcb->SchedulerAssist )
            {
              if ( KiVpThreadSystemWorkPriority >= 8 )
              {
                v7 = *v6;
                v8 = *v6 & 0x40000;
                if ( (v7 & 0x100000) != 0 || v8 && (unsigned __int8)v7 < KiVpThreadSystemWorkPriority )
                {
                  v9 = HvlpVirtualProcessorsIdentityMapped == 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  SchedulerAssist[3] = 2;
                  v11 = *(unsigned int *)(v5 + 36);
                  if ( v9 )
                    LODWORD(v11) = (unsigned __int8)byte_140D006C1[2 * v11] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v11] << 6);
                  SchedulerAssist[2] = v11;
                  __writemsr(0x400000C2u, (unsigned int)v11);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
