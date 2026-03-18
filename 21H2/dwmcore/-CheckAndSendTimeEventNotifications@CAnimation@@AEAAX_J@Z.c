/*
 * XREFs of ?CheckAndSendTimeEventNotifications@CAnimation@@AEAAX_J@Z @ 0x1800CD654
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800CD510 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimation::CheckAndSendTimeEventNotifications(CAnimation *this, __int64 a2)
{
  unsigned int i; // eax
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 77) )
  {
    if ( *((_DWORD *)this + 76) )
    {
      for ( i = *((_DWORD *)this + 48); i < *((_DWORD *)this + 46); *((_DWORD *)this + 48) = i )
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 20) + 16LL * i) > a2 )
          break;
        v5[0] = *((unsigned int *)this + 77);
        v5[1] = *((unsigned int *)this + 76);
        CoreUICallSend(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL), v5, 2LL, 1LL, 0, &unk_18032C3B7);
        i = *((_DWORD *)this + 48) + 1;
      }
    }
  }
}
