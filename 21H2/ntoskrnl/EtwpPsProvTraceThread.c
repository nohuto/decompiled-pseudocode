/*
 * XREFs of EtwpPsProvTraceThread @ 0x14068FFBC
 * Callers:
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 * Callees:
 *     PsGetCurrentThreadTeb @ 0x1402722C0 (PsGetCurrentThreadTeb.c)
 *     PsQueryThreadStartAddress @ 0x14027E158 (PsQueryThreadStartAddress.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx
  ULONG v10; // r9d
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int16 v15; // ax
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-118h] BYREF
  int v18; // [rsp+34h] [rbp-114h] BYREF
  int v19; // [rsp+38h] [rbp-110h] BYREF
  __int64 v20; // [rsp+40h] [rbp-108h]
  __int64 v21; // [rsp+48h] [rbp-100h] BYREF
  __int64 v22; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-E8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-D8h] BYREF
  int *v27; // [rsp+80h] [rbp-C8h]
  int v28; // [rsp+88h] [rbp-C0h]
  int v29; // [rsp+8Ch] [rbp-BCh]
  __int64 v30; // [rsp+90h] [rbp-B8h]
  int v31; // [rsp+98h] [rbp-B0h]
  int v32; // [rsp+9Ch] [rbp-ACh]
  __int64 v33; // [rsp+A0h] [rbp-A8h]
  int v34; // [rsp+A8h] [rbp-A0h]
  int v35; // [rsp+ACh] [rbp-9Ch]
  __int64 *v36; // [rsp+B0h] [rbp-98h]
  int v37; // [rsp+B8h] [rbp-90h]
  int v38; // [rsp+BCh] [rbp-8Ch]
  __int64 *v39; // [rsp+C0h] [rbp-88h]
  int v40; // [rsp+C8h] [rbp-80h]
  int v41; // [rsp+CCh] [rbp-7Ch]
  __int64 *v42; // [rsp+D0h] [rbp-78h]
  int v43; // [rsp+D8h] [rbp-70h]
  int v44; // [rsp+DCh] [rbp-6Ch]
  __int64 *v45; // [rsp+E0h] [rbp-68h]
  int v46; // [rsp+E8h] [rbp-60h]
  int v47; // [rsp+ECh] [rbp-5Ch]
  __int64 v48; // [rsp+F0h] [rbp-58h]
  int v49; // [rsp+F8h] [rbp-50h]
  int v50; // [rsp+FCh] [rbp-4Ch]
  int *v51; // [rsp+100h] [rbp-48h]
  int v52; // [rsp+108h] [rbp-40h]
  int v53; // [rsp+10Ch] [rbp-3Ch]
  __int64 *v54; // [rsp+110h] [rbp-38h]
  int v55; // [rsp+118h] [rbp-30h]
  int v56; // [rsp+11Ch] [rbp-2Ch]

  v20 = a1;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v7 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v7 && ((v9 = *(_WORD *)(v7 + 8), v9 == 332) || v9 == 452) )
        v8 = CurrentThreadTeb[3032];
      else
        v8 = CurrentThreadTeb[1480];
      v17 = v8;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)ThreadStop;
    v12 = *(_QWORD *)(a1 + 240);
    if ( v12 )
    {
      v13 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v13 && ((v15 = *(_WORD *)(v13 + 8), v15 == 332) || v15 == 452) )
        v14 = *(_DWORD *)(v12 + 12128);
      else
        v14 = *(_DWORD *)(v12 + 5920);
      v17 = v14;
    }
  }
  v18 = *(_DWORD *)(a1 + 1144);
  UserData.Ptr = (ULONGLONG)&v18;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v19 = *(_DWORD *)(a1 + 1152);
  v27 = &v19;
  v28 = 4;
  v29 = 0;
  v30 = a1 + 56;
  v31 = 8;
  v32 = 0;
  v33 = a1 + 48;
  v34 = 8;
  v35 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v21 = *(_QWORD *)(a2 + 16);
      v22 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 240);
    if ( v16 )
    {
      v21 = *(_QWORD *)(v16 + 8);
      v22 = *(_QWORD *)(v16 + 16);
    }
  }
  v36 = &v21;
  v37 = 8;
  v38 = 0;
  v39 = &v22;
  v40 = 8;
  v41 = 0;
  PsQueryThreadStartAddress(a1, 1);
  v42 = &v23;
  v43 = 8;
  v44 = 0;
  v23 = *(_QWORD *)(a1 + 1232);
  v45 = &v23;
  v46 = 8;
  v47 = 0;
  v48 = a1 + 240;
  v49 = 8;
  v50 = 0;
  v51 = &v17;
  v52 = 4;
  v53 = 0;
  v10 = 10;
  if ( !a3 )
  {
    v24 = *(_QWORD *)(a1 + 72);
    v54 = &v24;
    v55 = 8;
    v56 = 0;
    v10 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v10, &UserData);
}
