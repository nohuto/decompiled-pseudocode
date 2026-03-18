/*
 * XREFs of _NtGdiGetProcessSessionFonts@20 @ 0x987AE
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z @ 0x989AE (-GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetProcessSessionFonts(
        HANDLE Handle,
        volatile void *a2,
        char *Address,
        volatile void *a4,
        struct _EPROCESS **a5)
{
  unsigned int v5; // ebx
  unsigned int *PoolWithTag; // edi
  struct _EPROCESS *v7; // esi
  int ProcessSessionFonts; // esi
  ULONG v10; // eax
  ULONG *v11; // [esp+0h] [ebp-68h]
  ULONG *v12; // [esp+0h] [ebp-68h]
  void **v13; // [esp+0h] [ebp-68h]
  unsigned __int16 *v14; // [esp+4h] [ebp-64h]
  unsigned int v15; // [esp+20h] [ebp-48h]
  PVOID Object; // [esp+24h] [ebp-44h] BYREF
  unsigned int *v17; // [esp+28h] [ebp-40h]
  PVOID v18; // [esp+2Ch] [ebp-3Ch]
  unsigned int v19; // [esp+30h] [ebp-38h] BYREF
  struct _EPROCESS *v20; // [esp+34h] [ebp-34h]
  SIZE_T v21; // [esp+38h] [ebp-30h]
  SIZE_T Length; // [esp+3Ch] [ebp-2Ch]
  void *Src; // [esp+40h] [ebp-28h]
  PVOID v24; // [esp+44h] [ebp-24h]
  unsigned int v25; // [esp+48h] [ebp-20h] BYREF
  char v26; // [esp+4Eh] [ebp-1Ah]
  char v27; // [esp+4Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v5 = 0;
  v25 = 0;
  v19 = 0;
  v24 = 0;
  v18 = 0;
  PoolWithTag = 0;
  v17 = 0;
  Src = 0;
  v26 = 0;
  if ( _gSessionId )
    return 0;
  ms_exc.registration.TryLevel = 0;
  if ( ((unsigned __int8)Address & 3) != 0 )
    goto LABEL_34;
  if ( (unsigned int)(Address + 4) > _MmUserProbeAddress || Address + 4 < Address )
    *(_BYTE *)_MmUserProbeAddress = 0;
  if ( ((unsigned __int8)a5 & 3) != 0 )
LABEL_34:
    ExRaiseDatatypeMisalignment();
  if ( (unsigned int)(a5 + 1) > _MmUserProbeAddress || a5 + 1 < a5 )
    *(_BYTE *)_MmUserProbeAddress = 0;
  v15 = *(_DWORD *)Address;
  v7 = *a5;
  v20 = *a5;
  Length = 0;
  v21 = 0;
  if ( ULongLongToULong(4LL * v15, v11) < 0 || ULongLongToULong(2LL * (unsigned int)v7, v12) < 0 )
    ExRaiseStatus(-1073741675);
  ms_exc.registration.TryLevel = -2;
  if ( v15 )
  {
    v27 = 0;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4 * v15, 0x706D7447u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      Src = ExAllocatePoolWithTag(PagedPool, 2 * (_DWORD)v20, 0x706D7447u);
      if ( Src )
        goto LABEL_14;
    }
    ProcessSessionFonts = -1073741801;
  }
  else
  {
    v27 = 1;
    if ( !a2 && !a4 && !v20 )
    {
LABEL_14:
      Object = 0;
      ProcessSessionFonts = ObReferenceObjectByHandle(Handle, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
      v24 = Object;
      v18 = Object;
      if ( ProcessSessionFonts >= 0 )
      {
        ProcessSessionFonts = GetProcessSessionFonts(
                                v20,
                                (unsigned int)&v25,
                                (unsigned int)&v19,
                                PoolWithTag,
                                (unsigned int *)Src,
                                v13,
                                v14);
        if ( ProcessSessionFonts >= 0 && !v27 )
          v26 = 1;
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(Address, 4u, 4u);
        ProbeForWrite(a5, 4u, 4u);
        if ( ProcessSessionFonts >= 0 || ProcessSessionFonts == -1073741789 )
        {
          *(_DWORD *)Address = v25;
          *a5 = (struct _EPROCESS *)v19;
        }
        if ( ProcessSessionFonts >= 0 && !v27 )
        {
          memcpy((void *)a2, PoolWithTag, 4 * v25);
          memcpy((void *)a4, Src, 2 * v19);
        }
        ms_exc.registration.TryLevel = -2;
        if ( ProcessSessionFonts >= 0 )
          goto LABEL_24;
      }
      goto LABEL_38;
    }
    ProcessSessionFonts = -1073741811;
  }
LABEL_38:
  if ( v26 && v25 )
  {
    do
      NtClose((HANDLE)PoolWithTag[v5++]);
    while ( v5 < v25 );
  }
LABEL_24:
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x706D7447u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v10 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v10);
  }
  return ProcessSessionFonts;
}
