/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QAEHPAXH@Z @ 0x1D02C3
 * Callers:
 *     _GreChangeGhostFont@8 @ 0x1D89B9 (_GreChangeGhostFont@8.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 */

int __userpurge PUBLIC_PFTOBJ::ChangeGhostFont@<eax>(struct PFT **this@<ecx>, unsigned int a2@<edi>, void *a3, int a4)
{
  PUBLIC_PFTOBJ *v4; // ebx
  int v5; // esi
  struct PFF *PFFFromId; // eax
  unsigned int i; // edi
  int *v9; // edx
  int v10; // edx
  _DWORD *v11; // ecx
  int v12; // ebx
  HANDLE v13; // eax
  int v15; // eax
  struct PFF ***v16; // [esp+0h] [ebp-18h]
  int v17; // [esp+8h] [ebp-10h] BYREF
  unsigned int v18; // [esp+Ch] [ebp-Ch]
  HANDLE CurrentThreadId; // [esp+10h] [ebp-8h]
  struct PFT **v20; // [esp+14h] [ebp-4h]
  struct PFF *v21; // [esp+20h] [ebp+8h]

  v4 = (PUBLIC_PFTOBJ *)this;
  v5 = 0;
  v20 = this;
  if ( *this != gpPFTPrivate )
    return 0;
  v18 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = PsGetCurrentThreadId();
  v17 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  PFFFromId = GetPFFFromId((unsigned int)a3, (int)gpPFTPrivate, 0, a2, v16);
  v21 = PFFFromId;
  for ( i = 24; i < 0x68; i += 4 )
  {
    if ( v5 )
      break;
    v9 = (int *)(i + *(_DWORD *)v4);
    if ( v9 )
    {
      v10 = *v9;
      if ( v10 )
      {
        while ( 1 )
        {
          if ( PFFFromId == (struct PFF *)v10 )
          {
            v11 = *(_DWORD **)(v10 + 92);
            if ( v11 )
              break;
          }
LABEL_19:
          v10 = *(_DWORD *)(v10 + 4);
          if ( !v10 )
            goto LABEL_22;
        }
        while ( 1 )
        {
          v12 = v11[2];
          v13 = (HANDLE)v11[3];
          if ( (v12 & 4) != 0 ? v13 == CurrentThreadId : v13 == (HANDLE)v18 )
            break;
          v11 = (_DWORD *)v11[4];
          if ( !v11 )
            goto LABEL_18;
        }
        v15 = v11[1];
        if ( !a4 )
        {
          if ( v15 )
          {
            v11[1] = v15 - 1;
            v11[2] = v12 & 0xFFFFFFBF;
          }
LABEL_18:
          PFFFromId = v21;
          goto LABEL_19;
        }
        v11[1] = v15 + 1;
        v11[2] = v12 | 0x40;
        v5 = 1;
LABEL_22:
        v4 = (PUBLIC_PFTOBJ *)v20;
      }
    }
    PFFFromId = v21;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v5;
}
