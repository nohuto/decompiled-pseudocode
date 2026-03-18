/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1B6A24
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x1B6CA9 (TlgAggregateAbsorbEvent.c)
 * Callees:
 *     AggregateField @ 0x1B64D5 (AggregateField.c)
 *     CompareEventEntry @ 0x1B65E8 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1B6672 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1B66D4 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1B6884 (EnableFlushTimer.c)
 */

int __fastcall InsertEventEntryInLookUpTable(int a1, _DWORD *a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v5; // esi
  signed __int32 v6; // edi
  volatile signed __int32 *i; // ebx
  volatile signed __int32 *v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned __int8 v15; // bl
  int v16; // esi
  int v17; // esi
  int v18; // ecx
  signed __int64 v19; // rax
  volatile LONG *v20; // esi
  ULONG_PTR v22; // [esp-Ch] [ebp-40h]
  ULONG_PTR CurrentIrql; // [esp-Ch] [ebp-40h]
  int v24; // [esp+Ch] [ebp-28h]
  KIRQL OldIrql; // [esp+18h] [ebp-1Ch]
  int v27; // [esp+1Ch] [ebp-18h]
  ULONG_PTR BugCheckParameter1; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+28h] [ebp-Ch] BYREF
  int v31; // [esp+2Ch] [ebp-8h]
  char v32; // [esp+33h] [ebp-1h]

  v5 = *(_DWORD *)(a1 + 36);
  v6 = 0;
  v27 = 0;
  v30 = 0;
  v31 = 0;
  v24 = v5;
  v29 = ComputeEventEntryHash(a5, a3, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 217) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 144, CurrentIrql, 1u, 0);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 144));
    goto LABEL_10;
  }
  if ( KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 217) )
    {
      v22 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 144, v22, 1u, 0);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 144));
LABEL_10:
    v32 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 140, 0);
  v32 = 0;
LABEL_11:
  for ( i = (volatile signed __int32 *)(v5 + 4 * (v29 & 0x1F));
        ;
        i = (volatile signed __int32 *)(((v12 >> 31) & 0xFFFFFFFC) + v10 + 24) )
  {
    if ( !*i )
    {
      v8 = (volatile signed __int32 *)(v5 + 128);
      if ( *(_DWORD *)(v5 + 128) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 180);
        v13 = -1073741789;
        goto LABEL_37;
      }
      if ( !v6 )
      {
        v9 = CreateNewEventEntry(*(_BYTE *)(v5 + 217), a2, a3, a4, a5, v29, &v30);
        v6 = v30;
        v31 = v9;
        v27 = v30;
        if ( !v30 )
        {
          v13 = v31;
          if ( v9 == -1073741801 )
            ++*(_DWORD *)(v5 + 184);
          else
            ++*(_DWORD *)(v5 + 188);
          goto LABEL_37;
        }
        v8 = (volatile signed __int32 *)(v5 + 128);
      }
      if ( !_InterlockedCompareExchange(i, v6, 0) )
        break;
    }
    v10 = *i;
    BugCheckParameter1 = *i;
    v11 = *(_DWORD *)(*i + 28);
    if ( v29 == v11 )
    {
      v12 = CompareEventEntry(a3, a4, v10);
      v10 = BugCheckParameter1;
    }
    else
    {
      v12 = v29 - v11;
    }
    if ( !v12 )
    {
      if ( v10 )
      {
        v15 = 2;
        if ( a5 )
        {
          v16 = 2;
          do
          {
            v17 = 2 * v16;
            v18 = *(_DWORD *)(v10 + 16);
            LODWORD(v19) = *(_DWORD *)(a4 + 8 * v17);
            HIDWORD(v19) = *(unsigned __int8 *)(v18 + 8 * v17 + 13);
            AggregateField(v19, *(volatile signed __int64 **)(v18 + 8 * v17), *(_QWORD *)v19);
            v10 = BugCheckParameter1;
            v16 = ++v15;
          }
          while ( v15 < (unsigned int)a5 + 2 );
          v5 = v24;
          v6 = v27;
        }
      }
      v13 = v31;
      goto LABEL_37;
    }
  }
  v6 = 0;
  if ( _InterlockedIncrement(v8) == 1 )
    EnableFlushTimer(*(_DWORD *)(v5 + 208), *(_DWORD *)(v5 + 212));
  v14 = *(_DWORD *)(v5 + 128);
  v13 = v31;
  if ( *(_DWORD *)(v5 + 168) < v14 )
    *(_DWORD *)(v5 + 168) = v14;
LABEL_37:
  if ( v32 )
  {
    v20 = (volatile LONG *)(v5 + 144);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v20);
    else
      ExReleaseSpinLockShared(v20, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 140, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v13;
}
