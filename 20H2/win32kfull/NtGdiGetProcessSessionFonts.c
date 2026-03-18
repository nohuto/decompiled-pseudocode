/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1C0021250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C0020B8C (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(
        void *a1,
        volatile void *a2,
        unsigned int *a3,
        volatile void *a4,
        unsigned int *a5)
{
  PVOID PoolWithTag; // rsi
  unsigned __int16 *v6; // r15
  bool v7; // r12
  unsigned int v8; // r14d
  unsigned int v9; // eax
  void *v10; // rdi
  SIZE_T v11; // r13
  char v12; // r13
  NTSTATUS ProcessSessionFonts; // edi
  HANDLE *v15; // r12
  __int64 v16; // r13
  ULONG v17; // eax
  char v18; // [rsp+40h] [rbp-88h]
  unsigned int v19; // [rsp+44h] [rbp-84h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-7Ch]
  PVOID v22; // [rsp+50h] [rbp-78h]
  unsigned int v23; // [rsp+58h] [rbp-70h]
  PVOID v24; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v26; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-48h]
  unsigned int v29; // [rsp+84h] [rbp-44h]
  SIZE_T v30; // [rsp+88h] [rbp-40h]
  void *v34; // [rsp+E8h] [rbp+20h]

  v34 = (void *)a4;
  v19 = 0;
  v20 = 0;
  v22 = 0LL;
  v24 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0;
  if ( gSessionId )
    return 0LL;
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 < a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( ((unsigned __int8)a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a5 + 1) > MmUserProbeAddress || a5 + 1 < a5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v8 = *a3;
  v23 = v8;
  v28 = v8;
  v9 = *a5;
  v21 = v9;
  v29 = v9;
  v10 = (void *)(8LL * v8);
  Object = v10;
  if ( (unsigned __int64)v10 > 0xFFFFFFFF || (v11 = 2LL * v9, v30 = v11, v11 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( (_DWORD)v10 )
  {
    ProbeForWrite(a2, (unsigned int)v10, 4u);
    a4 = v34;
  }
  if ( (_DWORD)v11 )
    ProbeForWrite(a4, (unsigned int)v11, 4u);
  if ( v8 )
  {
    v18 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (SIZE_T)v10, 0x706D7447u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v11, 0x706D7447u);
      v26 = v6;
      if ( v6 )
      {
        v12 = 0;
LABEL_24:
        Object = 0LL;
        ProcessSessionFonts = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v22 = Object;
        v24 = Object;
        if ( ProcessSessionFonts >= 0 )
        {
          ProcessSessionFonts = GetProcessSessionFonts(
                                  (PRKPROCESS)Object,
                                  v23,
                                  v21,
                                  &v19,
                                  &v20,
                                  (void **)PoolWithTag,
                                  v6);
          if ( ProcessSessionFonts >= 0 )
            v7 = v12 == 0;
          ProbeForWrite(a3, 4uLL, 4u);
          ProbeForWrite(a5, 4uLL, 4u);
          if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
          {
            *a3 = v19;
            *a5 = v20;
          }
          if ( ProcessSessionFonts >= 0 && !v18 )
          {
            memmove((void *)a2, PoolWithTag, 8LL * v19);
            memmove(v34, v6, 2LL * v20);
          }
          if ( ProcessSessionFonts >= 0 )
            goto LABEL_34;
        }
        goto LABEL_49;
      }
    }
    ProcessSessionFonts = -1073741801;
  }
  else
  {
    v12 = 1;
    v18 = 1;
    if ( !a2 && !v34 && !v21 )
      goto LABEL_24;
    ProcessSessionFonts = -1073741811;
  }
LABEL_49:
  if ( v7 && v19 )
  {
    v15 = (HANDLE *)PoolWithTag;
    v16 = v19;
    do
    {
      NtClose(*v15++);
      --v16;
    }
    while ( v16 );
  }
LABEL_34:
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x706D7447u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v17 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v17);
  }
  return (unsigned int)ProcessSessionFonts;
}
