/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14003EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14003E844 (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct CP_EVENT_METADATA_BLOB *v4; // rdi
  struct CP_EVENT_METADATA_BLOB *v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // rax
  __int64 v43; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v44[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v45; // [rsp+38h] [rbp-C8h]
  _BYTE v46[304]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v47[304]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]
  __int64 v49; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *((_QWORD *)this + 19) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)a4 = 0;
    v8 = *((_QWORD *)this + 19);
    v43 = 0LL;
    v49 = 0LL;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v49, a2, a3, a4);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v43, v9, v10, v11);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v8 + 72LL))(v8, &v43, &v49);
    v7 = v12;
    if ( v12 >= 0 )
    {
      memset_0(v46, 0, 0x128uLL);
      if ( !v43
        || (v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v43 + 32LL))(v43, v46), v7 = v12, v12 >= 0) )
      {
        v44[0] = this;
        v44[1] = v46;
        memset_0(v47, 0, 0x128uLL);
        if ( v49
          && (v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v49 + 32LL))(v49, v47), v7 = v14, v14 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AD,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v14);
          v45 = 0;
          lambda_70348e31779f8b8cef919996b578f4f9_::operator()(v44, v15, v16, v17);
        }
        else
        {
          v18 = 2LL;
          v19 = v46;
          v20 = 2LL;
          do
          {
            v21 = v19[1];
            *(_OWORD *)v5 = *v19;
            v22 = v19[2];
            *((_OWORD *)v5 + 1) = v21;
            v23 = v19[3];
            *((_OWORD *)v5 + 2) = v22;
            v24 = v19[4];
            *((_OWORD *)v5 + 3) = v23;
            v25 = v19[5];
            *((_OWORD *)v5 + 4) = v24;
            v26 = v19[6];
            *((_OWORD *)v5 + 5) = v25;
            v27 = v19[7];
            v19 += 8;
            *((_OWORD *)v5 + 6) = v26;
            v5 = (struct CP_EVENT_METADATA_BLOB *)((char *)v5 + 128);
            *((_OWORD *)v5 - 1) = v27;
            --v20;
          }
          while ( v20 );
          v28 = *v19;
          v29 = v19[1];
          v30 = *((_QWORD *)v19 + 4);
          *(_OWORD *)v5 = v28;
          *((_OWORD *)v5 + 1) = v29;
          *((_QWORD *)v5 + 4) = v30;
          v31 = v47;
          do
          {
            v32 = v31[1];
            *(_OWORD *)v4 = *v31;
            v33 = v31[2];
            *((_OWORD *)v4 + 1) = v32;
            v34 = v31[3];
            *((_OWORD *)v4 + 2) = v33;
            v35 = v31[4];
            *((_OWORD *)v4 + 3) = v34;
            v36 = v31[5];
            *((_OWORD *)v4 + 4) = v35;
            v37 = v31[6];
            *((_OWORD *)v4 + 5) = v36;
            v38 = v31[7];
            v31 += 8;
            *((_OWORD *)v4 + 6) = v37;
            v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
            *((_OWORD *)v4 - 1) = v38;
            --v18;
          }
          while ( v18 );
          v39 = *v31;
          v7 = 0;
          v40 = v31[1];
          v41 = *((_QWORD *)v31 + 4);
          *(_OWORD *)v4 = v39;
          *((_OWORD *)v4 + 1) = v40;
          *((_QWORD *)v4 + 4) = v41;
        }
        goto LABEL_17;
      }
      v13 = 674LL;
    }
    else
    {
      v13 = 668LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v12);
LABEL_17:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v43);
    return v7;
  }
  v7 = -2005139437;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x296,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)0x887C0013LL);
  return v7;
}
