/*
 * XREFs of IopFreeIrpExtension @ 0x1402F3AD0
 * Callers:
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     IoSetActivityIdIrp @ 0x140379000 (IoSetActivityIdIrp.c)
 *     IoCleanupIrp @ 0x14038FA60 (IoCleanupIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F0D38 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140505F70 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140505FC0 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x14050655C (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402F42C0 (IopIrpHasExtensionType.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F0DCC (IopFreeCopyObjectsFromIrp.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3))()
{
  int v6; // ecx
  __int64 v7; // rdi
  char v8; // al
  __int64 (__fastcall *v9)(); // rbp
  int v10; // eax
  int v11; // eax
  int v13; // eax

  if ( EnableFeatureServicing_40524482 == 1 )
  {
    v6 = 1;
  }
  else if ( EnableFeatureServicing_40524482 )
  {
    v6 = (unsigned __int8)FeatureServicing_40524482_EnableKey();
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(_BYTE *)(a1 + 71);
  if ( v6 )
  {
    v9 = 0LL;
    if ( v8 >= 0 )
    {
      if ( !v7 )
        return v9;
      if ( (a2 == 5 || a2 == -1) && (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
        *(_QWORD *)(v7 + 40) = 0LL;
      if ( a2 != 9 && a2 != -1 )
        goto LABEL_22;
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 9LL) )
      {
        v10 = *(_DWORD *)(a1 + 16);
        if ( (v10 & 0x200) != 0 )
        {
          IopFreeCopyObjectsFromIrp();
          *(_BYTE *)(a1 + 65) = 1;
        }
        else if ( (v10 & 0x100) != 0 )
        {
          v9 = IopCopyCompleteReadIrp;
        }
      }
      if ( a2 == -1 )
        LOWORD(v11) = 0;
      else
LABEL_22:
        v11 = *(unsigned __int16 *)(v7 + 2) & ~(1 << a2);
      *(_WORD *)(v7 + 2) = v11;
      if ( (_WORD)v11 || (*(_BYTE *)(a1 + 71) & 0x40) == 0 || !a3 )
        return v9;
      ExFreePoolWithTag((PVOID)v7, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
    }
    else
    {
      *(_BYTE *)(a1 + 71) = v8 & 0x7F;
    }
    *(_QWORD *)(a1 + 200) = 0LL;
    return v9;
  }
  if ( v8 >= 0 )
  {
    if ( !v7 )
      return 0LL;
    if ( a2 == -1 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
        *(_QWORD *)(v7 + 40) = 0LL;
      *(_WORD *)(v7 + 2) = 0;
      LOWORD(v13) = 0;
    }
    else
    {
      v13 = *(unsigned __int16 *)(v7 + 2) & ~(1 << a2);
      *(_WORD *)(v7 + 2) = v13;
      if ( a2 == 5 )
        *(_QWORD *)(v7 + 40) = 0LL;
    }
    if ( (_WORD)v13 || (*(_BYTE *)(a1 + 71) & 0x40) == 0 || !a3 )
      return 0LL;
    ExFreePoolWithTag((PVOID)v7, 0x58707249u);
    *(_BYTE *)(a1 + 71) &= ~0x40u;
  }
  else
  {
    *(_BYTE *)(a1 + 71) = v8 & 0x7F;
  }
  *(_QWORD *)(a1 + 200) = 0LL;
  return 0LL;
}
