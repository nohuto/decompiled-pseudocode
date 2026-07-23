/*
 * XREFs of _RtlpFcSendFeatureUsageNotifications@12 @ 0x4B375C97
 * Callers:
 *     _RtlNotifyFeatureUsage@4 @ 0x4B3695D0 (_RtlNotifyFeatureUsage@4.c)
 * Callees:
 *     _RtlpFcNotifyFeatureUsageTarget@8 @ 0x4B375B93 (_RtlpFcNotifyFeatureUsageTarget@8.c)
 */

int __fastcall RtlpFcSendFeatureUsageNotifications(int a1, unsigned int *a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  char *v5; // esi
  int v6; // eax
  int v8; // [esp+10h] [ebp-8h]

  v3 = -1073741275;
  v8 = a1;
  if ( a3 )
  {
    v4 = 0;
    if ( *a2 )
    {
      v5 = (char *)a2 + 10;
      do
      {
        if ( *(_DWORD *)(v5 - 6) == *(_DWORD *)a1
          && *((_WORD *)v5 - 1) == *(_WORD *)(a1 + 4)
          && ((*v5 & 1) == 0 || (*(_BYTE *)(a1 + 6) & 1) != 0) )
        {
          v6 = RtlpFcNotifyFeatureUsageTarget((int *)a1, (WNF_STATE_NAME *)(v5 + 2));
          a1 = v8;
          if ( v6 >= 0 )
            v3 = v6;
        }
        ++v4;
        v5 += 16;
      }
      while ( v4 < *a2 );
    }
  }
  return v3;
}
