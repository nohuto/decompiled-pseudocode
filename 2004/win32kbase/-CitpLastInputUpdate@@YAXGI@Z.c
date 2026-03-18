/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0061C64
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     CitLastInputUpdate @ 0x1C0061BD0 (CitLastInputUpdate.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01FA53C (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0061E3C (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C009E6E4 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rbx
  int v4; // esi
  struct _CIT_IMPACT_CONTEXT *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = a1;
  LODWORD(v3) = a2;
  if ( a1 == 32 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
      MEMORY[0xFFFFF780000002E4] = a2;
  }
  if ( xmmword_1C02504A0 )
  {
    if ( a2 < *((_DWORD *)&xmmword_1C02504A0 + 2) )
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = xmmword_1C02504A0;
    *((_DWORD *)&xmmword_1C02504A0 + 2) = v3;
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)xmmword_1C02504A0 + 228), v3);
    if ( !v4 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v5 + 204), v3);
    v6 = *((_QWORD *)v5 + 15);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 928);
      if ( (unsigned int)(v3 - *(_DWORD *)(v7 + 84)) > 0x3E8 )
      {
        *(_DWORD *)(v7 + 84) = v3;
        *(_WORD *)(v7 + 90) = 0;
        CitpStatIncrement((unsigned __int16 *)v5 + 70, 1u);
        PsUpdateComponentPower(**((_QWORD **)v5 + 15), 9LL, 1LL);
      }
      if ( ((unsigned __int16)v2 & *(_WORD *)(v7 + 90)) == 0 )
      {
        if ( v2 <= 0x100 )
        {
          switch ( v2 )
          {
            case 0x100u:
              v8 = 164LL;
              break;
            case 1u:
              PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
              v8 = 142LL;
              break;
            case 2u:
              PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL, 1LL);
              v8 = 148LL;
              break;
            case 4u:
              v8 = 154LL;
              break;
            case 8u:
              v8 = 158LL;
              break;
            case 0x10u:
              v8 = 152LL;
              break;
            case 0x80u:
              v8 = 162LL;
              break;
            default:
              return;
          }
        }
        else
        {
          switch ( v2 )
          {
            case 0x400u:
              PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
              v8 = 146LL;
              break;
            case 0x800u:
              PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL, 1LL);
              v8 = 150LL;
              break;
            case 0x200u:
              PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
              v8 = 144LL;
              break;
            case 0x1000u:
              v8 = 156LL;
              break;
            case 0x2000u:
              v8 = 160LL;
              break;
            case 0x4000u:
              v8 = 166LL;
              break;
            default:
              return;
          }
        }
        CitpStatIncrement((unsigned __int16 *)((char *)v5 + v8), 1u);
        *(_WORD *)(v7 + 90) |= v2;
      }
    }
  }
}
