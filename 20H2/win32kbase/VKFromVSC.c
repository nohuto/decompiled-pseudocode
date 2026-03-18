/*
 * XREFs of VKFromVSC @ 0x1C01AC1D0
 * Callers:
 *     ProcessKeyboardInjectedInput @ 0x1C01AB174 (ProcessKeyboardInjectedInput.c)
 *     ProcessKeyboardInputWorker @ 0x1C01AB3A0 (ProcessKeyboardInputWorker.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B78B4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     GetModifierBits @ 0x1C0089FD0 (GetModifierBits.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00A3874 (ApiSetEditionGetActiveHKL.c)
 *     GetModificationNumber @ 0x1C01AC1B0 (GetModificationNumber.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v3; // bx
  __int16 ActiveHKL; // cx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax
  __int64 v14; // rdx

  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = ApiSetEditionGetActiveHKL();
  if ( (*(_DWORD *)gpsi & 4) != 0 && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    v6 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      a2 = -32;
      v7 = v6 | 0x80;
    }
    else
    {
      v7 = v6 & 0x7F;
    }
    *a1 = v7;
  }
  else
  {
    *a1 &= ~0x80u;
    v7 = *a1;
  }
  if ( gptiForeground && (v8 = *((_QWORD *)gptiForeground + 55)) != 0 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL);
  else
    v9 = gpKbdTbl;
  if ( a2 )
  {
    if ( a2 == -32 )
    {
      v3 = 511;
      if ( v7 == 42 || v7 == 54 )
        goto LABEL_31;
      v11 = *(_QWORD *)(v9 + 64);
    }
    else
    {
      if ( a2 != -31 )
      {
LABEL_15:
        LOBYTE(v10) = -1;
        return v10;
      }
      v11 = *(_QWORD *)(v9 + 72);
    }
    if ( v11 )
    {
      while ( *(_WORD *)(v11 + 2) )
      {
        if ( *(_BYTE *)v11 == v7 )
        {
          v3 = *(_WORD *)(v11 + 2);
          break;
        }
        v11 += 4LL;
      }
    }
  }
  else
  {
    if ( v7 >= *(_BYTE *)(v9 + 56) )
      goto LABEL_15;
    v3 = *(_WORD *)(*(_QWORD *)(v9 + 48) + 2LL * v7);
    if ( !v3 )
      goto LABEL_15;
  }
  if ( dword_1C024B05C )
  {
    dword_1C024B05C = 0;
LABEL_31:
    LOBYTE(v10) = 0;
    return v10;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    dword_1C024B05C = 1;
  }
  if ( (v3 & 0x200) != 0 )
  {
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, (__int64)gafRawKeyState);
    ModificationNumber = GetModificationNumber((__int64)&Modifiers_VK_STANDARD, ModifierBits);
    if ( ModificationNumber != 15 )
    {
      v14 = *((_QWORD *)gapulCvt_VK + ModificationNumber);
      if ( v14 )
      {
        while ( *(_DWORD *)v14 )
        {
          if ( *(_BYTE *)v14 == (_BYTE)v3 )
          {
            v10 = *(_WORD *)(v14 + 2);
            *((_WORD *)a1 + 1) = v10;
            return v10;
          }
          v14 += 4LL;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v10) = v3;
  return v10;
}
