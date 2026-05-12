/*
 * XREFs of RaidBusEnumeratorFreeUnitResources @ 0x1C00165D0
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0016540 (RaidDeleteBusEnumerator.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidBusEnumeratorFreeUnitResources(__int64 a1)
{
  IRP *v2; // rcx
  char v3; // di
  __int64 v4; // rdx
  unsigned int i; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  struct _MDL *v10; // rcx
  IRP *v11; // rcx
  __int64 v12; // rdx
  char v13; // r10
  unsigned int j; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  struct _MDL *v19; // rcx

  v2 = *(IRP **)(a1 + 8);
  v3 = 0;
  if ( v2 )
  {
    IoFreeIrp(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      *(_QWORD *)(v4 + 80) = 0LL;
      if ( !*(_DWORD *)(v4 + 20) )
      {
        for ( i = 0; i < *(_DWORD *)(v4 + 56); ++i )
        {
          v6 = *(unsigned int *)(v4 + 4LL * i + 120);
          if ( (unsigned int)v6 >= 0x80 )
          {
            v7 = *(unsigned int *)(v4 + 16);
            if ( (unsigned int)v6 <= (unsigned int)v7 )
            {
              if ( *(_DWORD *)(v6 + v4) == 64 && v6 + 40 <= v7 )
              {
                *(_QWORD *)((unsigned int)v6 + v4 + 16) = 0LL;
                v3 = 1;
              }
              if ( v3 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v4 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x72536152u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v8 = *(void **)(a1 + 32);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x4E536152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v9 = *(void **)(a1 + 40);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v10 = *(struct _MDL **)(a1 + 16);
  if ( v10 )
    IoFreeMdl(v10);
  v11 = *(IRP **)(a1 + 64);
  if ( v11 )
  {
    IoFreeIrp(v11);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 2) == 40 )
    {
      *(_QWORD *)(v12 + 80) = 0LL;
      if ( !*(_DWORD *)(v12 + 20) )
      {
        v13 = 0;
        for ( j = 0; j < *(_DWORD *)(v12 + 56); ++j )
        {
          v15 = *(unsigned int *)(v12 + 4LL * j + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v15 <= (unsigned int)v16 )
            {
              if ( *(_DWORD *)(v15 + v12) == 64 && v15 + 40 <= v16 )
              {
                *(_QWORD *)((unsigned int)v15 + v12 + 16) = 0LL;
                v13 = 1;
              }
              if ( v13 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x72536152u);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v17 = *(void **)(a1 + 88);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x4E536152u);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v18 = *(void **)(a1 + 96);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x32316152u);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
  }
  v19 = *(struct _MDL **)(a1 + 72);
  if ( v19 )
    IoFreeMdl(v19);
}
