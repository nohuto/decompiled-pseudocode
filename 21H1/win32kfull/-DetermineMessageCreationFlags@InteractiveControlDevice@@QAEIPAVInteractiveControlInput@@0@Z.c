/*
 * XREFs of ?DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z @ 0x1B1CCA
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80 (-FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 */

int __thiscall InteractiveControlDevice::DetermineMessageCreationFlags(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        struct InteractiveControlInput *a3)
{
  InteractiveControlDevice *v3; // ebx
  int v4; // esi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // edx
  struct InteractiveControlInput *v13; // [esp+1Ch] [ebp+Ch]
  struct InteractiveControlInput *v14; // [esp+1Ch] [ebp+Ch]

  v3 = this;
  v4 = 0;
  if ( *((_DWORD *)this + 74) )
  {
    if ( *((_DWORD *)this + 6) )
    {
      v6 = *((_DWORD *)a3 + 13);
      if ( (v6 & 4) != 0 )
        *((_DWORD *)a3 + 13) = v6 & 0xFFFFFF7B | 0x80;
    }
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 30) && (*((_DWORD *)a3 + 13) & 0x84) != 0 )
    *((_DWORD *)a3 + 14) = 0;
  v7 = *((_DWORD *)a3 + 13);
  v13 = (struct InteractiveControlInput *)(v7 & 4);
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 13);
    if ( (v13 != 0) != ((v8 >> 2) & 1) )
    {
      v4 = 1 << ((v13 != 0) + 8);
      if ( (v7 & 4) == 0 )
      {
        *((_DWORD *)this + 75) = 0;
        v7 = *((_DWORD *)a3 + 13);
        v8 = *((_DWORD *)a2 + 13);
      }
    }
    v14 = (struct InteractiveControlInput *)(v7 & 0x80);
    if ( (v14 != 0) != ((v8 >> 7) & 1) )
      v4 |= 1 << ((v14 != 0) + 5);
    if ( (v7 & 1) != (v8 & 1) )
      v4 |= 1 << !(v7 & 1);
    if ( *((_DWORD *)a3 + 9) == *((_DWORD *)a2 + 9)
      && *((_DWORD *)a3 + 10) == *((_DWORD *)a2 + 10)
      && (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 2) == 0 )
    {
      v3 = this;
    }
    else
    {
      v9 = v7 & 2;
      if ( (v9 != 0) == ((v8 >> 1) & 1) )
      {
        v3 = this;
        if ( v9 )
          v4 |= 0x1000u;
      }
      else
      {
        v10 = 755 - (v9 != 0);
        v4 |= 1 << (v10 + 24);
        v3 = this;
        if ( v10 == 755 )
        {
          *((_DWORD *)a3 + 9) = *((_DWORD *)a2 + 9);
          *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 10);
          *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 11);
          *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
        }
      }
    }
  }
  else
  {
    v4 = (v7 & 4) != 0 ? 0x200 : 0;
    if ( (v7 & 0x80u) != 0 )
      v4 |= 0x40u;
    if ( (v7 & 1) != 0 )
      v4 |= 1u;
    if ( (v7 & 2) != 0 )
      v4 |= 0x400u;
  }
  if ( *((_DWORD *)a3 + 14) )
    v4 |= 0x80u;
  if ( *((_DWORD *)v3 + 75) )
  {
    *((_DWORD *)v3 + 75) = 0;
    v4 |= 0x2000u;
  }
  return v4 & ~*((_DWORD *)InteractiveControlManager::Instance() + 14);
}
