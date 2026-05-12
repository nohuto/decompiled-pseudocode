/*
 * XREFs of StorpGetRequestInfo @ 0x1C003AF50
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  _UNICODE_STRING *p_FileName; // rbp
  __int16 v6; // cx
  __int64 v8; // rdi
  IRP *MasterIrp; // rdi
  __int64 v10; // rax
  int v11; // eax
  unsigned int Flags; // ecx
  _FILE_OBJECT *OriginalFileObject; // rcx
  unsigned int v14; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Length; // eax
  int v17; // edx
  unsigned __int8 CurrentIrql; // al
  ULONG RequestorProcessId; // eax

  v4 = 0;
  p_FileName = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  v6 = *(_WORD *)a3;
  if ( (unsigned __int16)(*(_WORD *)a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v8 = *(_QWORD *)(a2 + 96);
    if ( !v8 || *(_DWORD *)v8 != 523124044 || (MasterIrp = *(IRP **)(v8 + 768)) == 0LL )
    {
      MasterIrp = *(IRP **)(a2 + 80);
      goto LABEL_14;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 48);
    if ( !v10 || *(_DWORD *)v10 != 523124044 )
      goto LABEL_49;
    MasterIrp = *(IRP **)(v10 + 768);
    if ( !MasterIrp )
    {
      MasterIrp = *(IRP **)(v10 + 176);
LABEL_14:
      if ( !MasterIrp )
        goto LABEL_49;
    }
  }
  if ( (MasterIrp->Flags & 8) == 0 || (MasterIrp = MasterIrp->AssociatedIrp.MasterIrp) != 0LL )
  {
    *(_DWORD *)(a3 + 4) = IoGetIoPriorityHint(MasterIrp);
    v11 = 0;
    *(_DWORD *)(a3 + 8) = 0;
    Flags = MasterIrp->Flags;
    if ( (Flags & 1) != 0 )
    {
      *(_DWORD *)(a3 + 8) = 1;
      v11 = 1;
      Flags = MasterIrp->Flags;
    }
    if ( (Flags & 0x42) != 0 )
    {
      v11 |= 2u;
      *(_DWORD *)(a3 + 8) = v11;
    }
    OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      v14 = OriginalFileObject->Flags;
      if ( (v14 & 0x20) != 0 )
      {
        v11 |= 4u;
        *(_DWORD *)(a3 + 8) = v11;
        v14 = OriginalFileObject->Flags;
      }
      if ( (v14 & 0x18000) != 0 )
      {
        v11 |= 8u;
        *(_DWORD *)(a3 + 8) = v11;
        v14 = OriginalFileObject->Flags;
      }
      if ( (v14 & 0x10) != 0 )
        *(_DWORD *)(a3 + 8) = v11 | 0x10;
      p_FileName = &OriginalFileObject->FileName;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = v11 | 0x40;
    }
    CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
    if ( !CurrentStackLocation )
    {
      *(_QWORD *)(a3 + 12) = 0LL;
      v17 = 0;
      *(_BYTE *)(a3 + 20) = 0;
      goto LABEL_39;
    }
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
      Length = CurrentStackLocation->Parameters.Read.Length;
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 4 )
      {
        *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
        Length = CurrentStackLocation->Parameters.Read.Length;
        *(_BYTE *)(a3 + 20) = 1;
LABEL_37:
        *(_DWORD *)(a3 + 16) = Length;
        v17 = *(_DWORD *)(a3 + 12);
LABEL_39:
        if ( (v17 & 0xFFFF0000) == 0x56530000 )
        {
          *(_DWORD *)(a3 + 8) |= 0x80u;
        }
        else if ( CurrentStackLocation && CurrentStackLocation->MajorFunction == 4 && v17 )
        {
          *(_DWORD *)(a3 + 8) |= 0x100u;
        }
        v6 = *(_WORD *)a3;
        if ( *(_WORD *)a3 == 2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          *(_QWORD *)(a3 + 24) = p_FileName;
          if ( CurrentIrql > 2u )
          {
            *(_DWORD *)(a3 + 32) = -1;
            v6 = 2;
          }
          else
          {
            RequestorProcessId = IoGetRequestorProcessId(MasterIrp);
            v6 = *(_WORD *)a3;
            *(_DWORD *)(a3 + 32) = RequestorProcessId;
          }
        }
        goto LABEL_50;
      }
      *(_DWORD *)(a3 + 12) = 0;
      Length = 0;
    }
    *(_BYTE *)(a3 + 20) = 0;
    goto LABEL_37;
  }
LABEL_49:
  v4 = 1;
LABEL_50:
  if ( (unsigned __int16)(v6 - 1) <= 1u )
    *(_WORD *)(a3 + 2) = 40;
  if ( v4 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_BYTE *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 4) = 2;
    if ( v6 == 2 )
    {
      *(_QWORD *)(a3 + 24) = 0LL;
      *(_DWORD *)(a3 + 32) = 0;
    }
  }
  return 0LL;
}
