/*
 * XREFs of _RtlGetThreadWorkOnBehalfTicket@8 @ 0x4B2A73B0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlGetThreadWorkOnBehalfTicket(_DWORD *a1, int a2)
{
  struct _TEB *v2; // ecx
  int v3; // eax
  NTSTATUS InformationThread; // ecx
  _DWORD ThreadInformation[2]; // [esp+4h] [ebp-14h] BYREF
  char v7; // [esp+Ch] [ebp-Ch]

  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 3 )
    return -1073741584;
  if ( (a2 & 2) != 0 )
  {
    InformationThread = NtQueryInformationThread(
                          (HANDLE)0xFFFFFFFE,
                          ThreadWorkOnBehalfTicket,
                          ThreadInformation,
                          0x10u,
                          0);
    if ( InformationThread >= 0 )
    {
      if ( (a2 & 4) != 0 || (v7 & 1) == 0 )
      {
        *a1 = ThreadInformation[0];
        a1[1] = ThreadInformation[1];
      }
      else
      {
        *a1 = 0;
        a1[1] = 0;
      }
    }
  }
  else
  {
    v2 = NtCurrentTeb();
    *a1 = *(_DWORD *)v2->WorkingOnBehalfTicket;
    v3 = *(_DWORD *)&v2->WorkingOnBehalfTicket[4];
    InformationThread = 0;
    a1[1] = v3;
  }
  return InformationThread;
}
