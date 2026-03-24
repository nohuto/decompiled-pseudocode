/*
 * XREFs of AcpiPccAcquireSubspaceCore @ 0x1C0059938
 * Callers:
 *     AcpiPccAcquireSubspaceAsync @ 0x1C0059920 (AcpiPccAcquireSubspaceAsync.c)
 *     AcpiPccAcquireSubspace @ 0x1C00B0A40 (AcpiPccAcquireSubspace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccAcquireSubspaceCore(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // ebx
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // al
  int v11; // ecx
  int v12; // edx
  KIRQL v13; // r15
  __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned int v16; // ecx

  if ( a2 )
  {
    v9 = (KSPIN_LOCK *)(a1 + 640);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
    v11 = *(_DWORD *)(a1 + 4);
    v12 = v11 & 0x1E;
    v13 = v10;
    if ( v12 == 6 )
    {
      *(_QWORD *)(a1 + 248) = a2;
      *(_QWORD *)(a1 + 256) = a3;
      *(_DWORD *)(a1 + 4) = v11 & 0xFFFFFFE1 | 8;
      v8 = 259;
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
LABEL_16:
      KeReleaseSpinLock(v9, v13);
      return v8;
    }
    if ( a4 )
    {
      v14 = a1 + 232;
      v15 = *(_QWORD **)(v14 + 8);
      if ( *v15 != v14 )
        __fastfail(3u);
      *a4 = v14;
      a4[1] = v15;
      *v15 = a4;
      *(_QWORD *)(v14 + 8) = a4;
      a4[6] = a2;
    }
    else
    {
      if ( ((v12 - 16) & 0xFFFFFFFD) != 0 )
      {
        v8 = -1073740024;
        goto LABEL_16;
      }
      if ( v12 == 16 )
        v16 = v11 & 0xFFFFFFE1 | 0x14;
      else
        v16 = v11 & 0xFFFFFFE1 | 0x16;
      *(_DWORD *)(a1 + 4) = v16;
      *(_QWORD *)(a1 + 248) = a2;
      *(_QWORD *)(a1 + 256) = a3;
    }
    v8 = 259;
    goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
