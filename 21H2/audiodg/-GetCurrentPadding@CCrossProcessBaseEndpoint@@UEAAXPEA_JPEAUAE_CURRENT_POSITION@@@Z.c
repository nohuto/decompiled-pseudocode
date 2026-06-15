/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140060750
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140060680 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E30 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x1400618BC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061978 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  signed __int64 v5; // rsi
  CCrossProcessBaseEndpoint *v6; // rbp
  signed __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // edx
  double v14; // xmm1_8
  __int64 v15; // rcx

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 8) + 16LL), 0LL, 0LL);
  v6 = (CCrossProcessBaseEndpoint *)((char *)this - 8);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 8) + 24LL), 0LL, 0LL);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)((char *)this - 8), v5)
    && CCrossProcessBaseEndpoint::IsValidOffset(v6, v7) )
  {
    if ( v5 >= v7 )
    {
      v10 = v5 - v7;
    }
    else
    {
      if ( (byte_140090581 & 4) != 0 )
        McTemplateU0pqxxxx_EventWriteTransfer(v9, v8, (_DWORD)v6, 4, 0, v5, v7, 0);
      v10 = 0;
      ShipAssert(65537LL, 0LL);
    }
    if ( (byte_140090581 & 4) != 0 )
      McTemplateU0pqxxxx_EventWriteTransfer(
        v7 / *((unsigned int *)this + 20),
        v5 % *((unsigned int *)this + 20),
        (_DWORD)v6,
        3,
        0,
        v5 / *((unsigned int *)this + 20),
        v7 / *((unsigned int *)this + 20),
        v10 / *((_DWORD *)this + 20));
    v11 = v10 / *((_DWORD *)this + 20);
    v12 = *((_QWORD *)this + 9);
    v13 = *(_DWORD *)(v12 + 188) % (unsigned int)*(unsigned __int16 *)(v12 + 192);
    v14 = (double)v11
        * 10000000.0
        / (double)(int)(*(_DWORD *)(v12 + 188) / (unsigned int)*(unsigned __int16 *)(v12 + 192))
        + 0.5;
    v15 = (unsigned int)(int)v14;
    *a2 = v15;
    if ( (byte_140090581 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(v15, v13, 0, 100, v5, v7, (int)v14, v11, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
}
