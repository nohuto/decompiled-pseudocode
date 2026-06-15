/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140057BB0
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140057AE0 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015F10 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140058CFC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140058DB8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edx
  double v15; // xmm1_8
  __int64 v16; // rcx

  v3 = *((_QWORD *)this + 8);
  v4 = (CCrossProcessBaseEndpoint *)((char *)this - 8);
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(_QWORD *)(v3 + 24);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)((char *)this - 8), v7)
    && CCrossProcessBaseEndpoint::IsValidOffset(v4, v8) )
  {
    if ( v7 >= v8 )
    {
      v11 = v7 - v8;
    }
    else
    {
      if ( (byte_140085401 & 4) != 0 )
        McTemplateU0pqxxxx_EventWriteTransfer(v10, v9, (_DWORD)v4, 4, 0, v7, v8, 0);
      v11 = 0;
      ShipAssert(65537LL, 0LL);
    }
    if ( (byte_140085401 & 4) != 0 )
      McTemplateU0pqxxxx_EventWriteTransfer(
        v8 / *((unsigned int *)this + 20),
        v7 % *((unsigned int *)this + 20),
        (_DWORD)v4,
        3,
        0,
        v7 / *((unsigned int *)this + 20),
        v8 / *((unsigned int *)this + 20),
        v11 / *((_DWORD *)this + 20));
    v12 = v11 / *((_DWORD *)this + 20);
    v13 = *((_QWORD *)this + 9);
    v14 = *(_DWORD *)(v13 + 188) % (unsigned int)*(unsigned __int16 *)(v13 + 192);
    v15 = (double)v12
        * 10000000.0
        / (double)(int)(*(_DWORD *)(v13 + 188) / (unsigned int)*(unsigned __int16 *)(v13 + 192))
        + 0.5;
    v16 = (unsigned int)(int)v15;
    *a2 = v16;
    if ( (byte_140085401 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(v16, v14, 0, 100, v7, v8, (int)v15, v12, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
}
