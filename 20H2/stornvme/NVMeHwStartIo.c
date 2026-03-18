/*
 * XREFs of NVMeHwStartIo @ 0x1C0002110
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C00029B0 (ProcessCommandInSpecificQueue.c)
 *     NVMeControllerPowerDown @ 0x1C000CC1C (NVMeControllerPowerDown.c)
 *     NVMeRequestComplete @ 0x1C000F3F0 (NVMeRequestComplete.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2)
{
  char v4; // cl
  int v5; // edx
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  char v8; // r8
  char v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 v14; // r14
  __int64 v15; // rbp
  __int64 v17; // rax
  int v18; // r8d
  bool v19; // zf
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // r15d
  unsigned int v23; // r12d
  unsigned __int16 v24; // ax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_DWORD *)(a2 + 20);
  else
    v5 = *(unsigned __int8 *)(a2 + 2);
  if ( v5 == 37 )
  {
    if ( v4 == 40 )
    {
      v17 = *(unsigned int *)(a2 + 120);
      v18 = *(_DWORD *)(v17 + a2 + 12);
      v19 = *(_DWORD *)(v17 + a2 + 16) == 1;
    }
    else
    {
      v18 = *(_DWORD *)(a2 + 8);
      v19 = *(_DWORD *)(a2 + 64) == 1;
    }
    if ( v19 )
    {
      if ( v18 == 2 || v18 == 23 )
      {
        v20 = *(_DWORD *)(a1 + 24) & 0xFFFFFFF6 | 8;
      }
      else
      {
        if ( v18 != 4 )
        {
          *(_BYTE *)(a2 + 3) = 6;
LABEL_35:
          StorPortNotification(0LL, a1, a2);
          return 1;
        }
        v20 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFC | 2;
      }
      *(_DWORD *)(a1 + 24) = v20;
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_35;
    }
  }
  if ( v4 == 40 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = *(_BYTE *)(v6 + a2 + 10);
    v8 = *(_BYTE *)(v6 + a2 + 9);
    v9 = *(_BYTE *)(v6 + a2 + 8);
  }
  else
  {
    v7 = *(_BYTE *)(a2 + 7);
    v8 = *(_BYTE *)(a2 + 6);
    v9 = *(_BYTE *)(a2 + 5);
  }
  if ( v9
    || v8
    || (unsigned int)v7 >= *(_DWORD *)(a1 + 200)
    || (v10 = a1 + 8LL * v7, (v11 = *(_QWORD *)(v10 + 1720)) == 0) )
  {
    *(_BYTE *)(a2 + 3) = 8;
    goto LABEL_35;
  }
  if ( v5 )
  {
    switch ( v5 )
    {
      case 2:
      case 9:
        break;
      case 7:
        if ( *(_BYTE *)(a1 + 16) )
        {
          NVMeControllerPowerDown(a1);
          v11 = *(_QWORD *)(v10 + 1720);
        }
        *(_DWORD *)(v11 + 20) |= 2u;
        *(_BYTE *)(a2 + 3) = 1;
        break;
      default:
        *(_BYTE *)(a2 + 3) = 6;
        break;
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
    goto LABEL_35;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v12 = *(_QWORD *)(a2 + 104);
  else
    v12 = *(_QWORD *)(a2 + 56);
  if ( (v12 & 0xFFF) != 0 )
    v12 = v12 - (v12 & 0xFFF) + 4096;
  v13 = *(unsigned __int16 *)(v12 + 4244);
  if ( (_WORD)v13 )
  {
    v14 = *(_WORD *)(a1 + 278);
    v15 = 136 * v13 + *(_QWORD *)(a1 + 768) - 136LL;
  }
  else
  {
    v14 = *(_WORD *)(a1 + 276);
    v15 = a1 + 288;
  }
  if ( !(unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v15, v14) )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v15 + 40)
      && (v21 = *(unsigned __int16 *)(a1 + 280), v22 = 0, *(_BYTE *)(v12 + 4253) |= 0x10u, (v23 = v21) != 0) )
    {
      while ( 1 )
      {
        v24 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v15 + 40) + 1) % *(unsigned __int16 *)(a1 + 280) )
          v24 = ((unsigned int)*(unsigned __int16 *)(v15 + 40) + 1) % *(unsigned __int16 *)(a1 + 280);
        *(_WORD *)(v12 + 4244) = v24;
        v15 = 136LL * v24 + *(_QWORD *)(a1 + 768) - 136LL;
        if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v15, v14) )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v22 < v23 )
          continue;
        goto LABEL_49;
      }
    }
    else
    {
LABEL_49:
      NVMeRequestComplete(a1, a2, 0LL);
    }
  }
  return 1;
}
