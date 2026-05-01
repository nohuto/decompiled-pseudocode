/*
 * XREFs of sub_180039F50 @ 0x180039F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003902C @ 0x18003902C (sub_18003902C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039F50(__int64 a1, __int64 a2)
{
  DWORD ActiveProcessorCount; // edi
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0LL;
  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      goto LABEL_16;
    v7 = v6;
    v8 = 626;
LABEL_15:
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v7);
LABEL_16:
    v11 = v17;
    goto LABEL_25;
  }
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      v8 = 633;
LABEL_14:
      v7 = v9;
      goto LABEL_15;
    }
    if ( ActiveProcessorCount >= 0x20 )
    {
      v10 = ActiveProcessorCount - 32;
      if ( v16 >> (ActiveProcessorCount - 32) )
      {
        v6 = -2147024809;
        v8 = 637;
        v7 = -2147024809;
        goto LABEL_15;
      }
    }
    v9 = sub_18003902C(v10, &v17, v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      v8 = 640;
      goto LABEL_14;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v12 = *(_QWORD *)(a1 + 152);
  v11 = v17;
  if ( v12 != v17 )
  {
    v13 = v17;
    if ( v17 )
    {
      (*(void (**)(void))(*(_QWORD *)v17 + 8LL))();
      v12 = *(_QWORD *)(a1 + 152);
      v11 = v17;
    }
    *(_QWORD *)(a1 + 152) = v13;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = v17;
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v11 = v17;
  }
  v6 = 0;
LABEL_25:
  if ( v11 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v6;
}
