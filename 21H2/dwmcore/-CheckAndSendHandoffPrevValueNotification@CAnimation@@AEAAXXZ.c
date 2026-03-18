/*
 * XREFs of ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ @ 0x1800D7B4C
 * Callers:
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800D7AD0 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimation::CheckAndSendHandoffPrevValueNotification(CAnimation *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (*((_BYTE *)this + 120) & 0x40) == 0 )
  {
    v2 = *((unsigned int *)this + 77);
    if ( (_DWORD)v2 )
    {
      v3 = *((unsigned int *)this + 76);
      if ( (_DWORD)v3 )
      {
        v5[0] = v2;
        v4 = *((_QWORD *)this + 2);
        v5[1] = v3;
        CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v4 + 1240) + 40LL), v5, 2LL, 1LL, 1, &unk_18032C3BB);
        *((_BYTE *)this + 120) |= 0x40u;
      }
    }
  }
}
