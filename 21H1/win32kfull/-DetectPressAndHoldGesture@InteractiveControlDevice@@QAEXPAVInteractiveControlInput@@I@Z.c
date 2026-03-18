/*
 * XREFs of ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80 (-FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z.c)
 */

void __thiscall InteractiveControlDevice::DetectPressAndHoldGesture(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // ecx
  struct InteractiveControlManager *v6; // eax
  int v7; // edx
  unsigned int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]

  v8 = 128;
  v4 = (a3 >> 9) & 1;
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 30) || (a3 & 0x80u) == 0 )
    goto LABEL_7;
  v9 = *((_DWORD *)a2 + 14);
  if ( *((_DWORD *)this + 70) )
  {
    *((_DWORD *)this + 71) += *((_DWORD *)a2 + 14);
    v9 = *((_DWORD *)this + 71);
  }
  if ( (signed int)abs32(v9) > *((_DWORD *)InteractiveControlManager::Instance() + 32) )
  {
    v8 = 0;
    v5 = 1;
    v4 = 0;
  }
  else
  {
LABEL_7:
    v5 = 0;
  }
  if ( (a3 & 0x100) != 0 )
    v5 = 1;
  if ( ((a3 & 0x100) == 0 ? v4 : 0) != 0 )
  {
    *((_DWORD *)this + 71) = 0;
    *((_DWORD *)this + 72) = 1;
    *((_DWORD *)this + 73) = a2;
    v6 = InteractiveControlManager::Instance();
    *((_DWORD *)this + 70) = SetRITTimer(
                               0,
                               *((_DWORD *)v6 + 28),
                               (int)lambda_46e7683cae22722f297e69793ac65061_::_lambda_invoker_stdcall_,
                               1);
  }
  else if ( v5 )
  {
    v7 = *((_DWORD *)this + 70);
    if ( v7 )
    {
      FindTimer(0, v7, 4u, 1, 0);
      *((_DWORD *)this + 70) = 0;
      InteractiveControlDevice::FlushBufferedInput(this, v8);
    }
  }
  if ( (a3 & 0x20) != 0 )
    *((_DWORD *)this + 74) = 0;
}
