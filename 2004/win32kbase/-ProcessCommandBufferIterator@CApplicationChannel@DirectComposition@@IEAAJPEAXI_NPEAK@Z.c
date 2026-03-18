/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0097420
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C00971C0 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0097420 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0002060 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C000DFEC (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C003BE48 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C003C0FC (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C003F91C (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00435EC (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C0045CCC (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0097420 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0097AEC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0097B5C (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0098E08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C0099304 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0099898 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0099A28 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00A819C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C012B958 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C012C448 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01D0E88 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C01D11FC (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01D18EC (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1C01D1F50 (McTemplateK0qx_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        char *a2,
        unsigned __int64 a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v5; // r14d
  DirectComposition::CApplicationChannel *v7; // r13
  int Resource; // edi
  unsigned int *v9; // r15
  int v10; // eax
  char *v11; // rax
  __int64 v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rbx
  bool v14; // zf
  char *v15; // rax
  unsigned int v16; // r12d
  unsigned __int64 v17; // rdx
  char *v18; // rax
  __int64 v19; // r9
  unsigned int v20; // r12d
  unsigned __int64 v21; // rdx
  char v22; // al
  _DWORD *v23; // rax
  unsigned int v24; // r11d
  int v25; // r13d
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r10
  struct DirectComposition::CResourceMarshaler *v29; // r12
  unsigned __int64 v30; // rdx
  unsigned int *v31; // rdx
  __int64 v32; // r10
  char *v33; // r9
  unsigned __int64 v34; // rdx
  unsigned int *v36; // rax
  char *v37; // rax
  __int64 v38; // rdx
  const unsigned int *v39; // r9
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  const struct tagMsgRoutingInfo *v44; // r9
  char *v45; // rax
  char *v46; // rax
  void *v47; // rbx
  char *v48; // rax
  size_t v49; // r13
  void *v50; // rdx
  unsigned int v51; // r8d
  char *v52; // rax
  unsigned int *v53; // r10
  const unsigned __int64 *v54; // r9
  int v55; // ebx
  char v56; // al
  int v57; // r8d
  char v58; // al
  unsigned int *v59; // [rsp+20h] [rbp-98h]
  char v60; // [rsp+28h] [rbp-90h]
  unsigned __int8 v61; // [rsp+40h] [rbp-78h] BYREF
  char v62; // [rsp+41h] [rbp-77h] BYREF
  char v63; // [rsp+42h] [rbp-76h] BYREF
  char v64; // [rsp+43h] [rbp-75h] BYREF
  _BYTE v65[4]; // [rsp+44h] [rbp-74h] BYREF
  int v66; // [rsp+48h] [rbp-70h]
  void *v67; // [rsp+50h] [rbp-68h]
  void *Src; // [rsp+58h] [rbp-60h]
  char *v69; // [rsp+60h] [rbp-58h]
  __int64 v70; // [rsp+68h] [rbp-50h]
  unsigned __int64 v71; // [rsp+70h] [rbp-48h]
  DirectComposition::CApplicationChannel *v72; // [rsp+C0h] [rbp+8h]
  char v73; // [rsp+D8h] [rbp+20h]

  v73 = a4;
  v72 = (DirectComposition::CApplicationChannel *)this;
  v5 = a3;
  v7 = (DirectComposition::CApplicationChannel *)this;
  v71 = this;
  Resource = 0;
  while ( Resource >= 0 && v5 >= 4 )
  {
    a3 = (unsigned __int64)a5;
    ++*a5;
    v9 = (unsigned int *)a2;
    v69 = a2;
    v10 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 9 )
    {
      v15 = a2;
      if ( v5 < 0x10 )
      {
LABEL_148:
        Resource = -1073741811;
        goto LABEL_26;
      }
      a2 += 16;
      v5 -= 16;
      v16 = *((_DWORD *)v15 + 2);
      this = *((unsigned int *)v15 + 1);
      v61 = 0;
      v17 = (unsigned int)(this - 1);
      if ( !(_DWORD)this
        || v17 >= *((_QWORD *)v7 + 10)
        || (_mm_lfence(),
            this = v17 * *((_QWORD *)v7 + 11),
            (v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *((_QWORD *)v7 + 7))) == 0LL) )
      {
LABEL_152:
        Resource = -1073741790;
        goto LABEL_26;
      }
      Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, unsigned int *, unsigned __int8 *))(*(_QWORD *)v13 + 120LL))(
                   v13,
                   v16,
                   a5,
                   &v61);
      if ( Resource >= 0 && *((_QWORD *)v13 + 4) )
      {
        v58 = DirectComposition::CApplicationChannel::UnbindAnimation(v7, v13, v16);
        this = v61;
        if ( v58 )
          this = 1LL;
        v61 = this;
      }
      else
      {
        this = v61;
      }
      if ( Resource >= 0 )
      {
        v14 = (_BYTE)this == 0;
        goto LABEL_24;
      }
    }
    else
    {
      switch ( v10 )
      {
        case 8:
          v18 = a2;
          if ( v5 < 0x18 )
          {
            Resource = -1073741811;
            break;
          }
          a2 += 24;
          v5 -= 24;
          v19 = *((_QWORD *)v18 + 2);
          v20 = *((_DWORD *)v18 + 2);
          this = *((unsigned int *)v18 + 1);
          v62 = 0;
          v21 = (unsigned int)(this - 1);
          if ( !(_DWORD)this )
            goto LABEL_152;
          if ( v21 >= *((_QWORD *)v7 + 10) )
            goto LABEL_152;
          _mm_lfence();
          this = v21 * *((_QWORD *)v7 + 11);
          v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *((_QWORD *)v7 + 7));
          if ( !v13 )
            goto LABEL_152;
          Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v13 + 112LL))(
                       v13,
                       v7,
                       v20,
                       v19,
                       &v62);
          if ( Resource >= 0
            && *((_QWORD *)v13 + 4)
            && DirectComposition::CApplicationChannel::UnbindAnimation(v7, v13, v20) )
          {
            v22 = 1;
            v62 = 1;
          }
          else
          {
            v22 = v62;
          }
          if ( Resource >= 0 )
          {
            v14 = v22 == 0;
            goto LABEL_24;
          }
          break;
        case 13:
          v23 = a2;
          if ( v5 < 0x10 )
          {
            Resource = -1073741811;
            break;
          }
          a2 += 16;
          v5 -= 16;
          a3 = (unsigned int)v23[3];
          v24 = v23[2];
          v66 = v24;
          v25 = v23[1];
          v26 = 0LL;
          v27 = (unsigned int)(v25 - 1);
          if ( v25 && v27 < *((_QWORD *)v72 + 10) )
          {
            _mm_lfence();
            this = *((_QWORD *)v72 + 11);
            v28 = *((_QWORD *)v72 + 7);
            v29 = *(struct DirectComposition::CResourceMarshaler **)(v27 * this + v28);
            if ( v29 )
            {
              if ( (_DWORD)a3
                && ((v30 = (unsigned int)(a3 - 1), v30 >= *(_QWORD *)(v71 + 80))
                 || (this *= v30, (v26 = *(_QWORD *)(this + v28)) == 0)) )
              {
                Resource = -1073741811;
              }
              else
              {
                v65[0] = 0;
                Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v29 + 152LL))(
                             v29,
                             v72,
                             v24,
                             v26,
                             v65);
                if ( Resource >= 0 && v65[0] )
                  DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v72, v29);
              }
              goto LABEL_47;
            }
          }
          else
          {
            v29 = 0LL;
          }
          Resource = -1073741790;
LABEL_47:
          if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
            && Resource >= 0
            && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v29 + 96LL))(
                 v29,
                 127LL)
            && (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
          {
            v55 = *((_DWORD *)v29 + 6);
            v56 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v29 + 8LL))(v29);
            v60 = v25;
            v7 = v72;
            McTemplateK0qqqqq_EtwWriteTransfer(
              v66,
              (unsigned int)&DCompResourcePropertyUpdate,
              v57,
              *((_DWORD *)v72 + 7),
              v55,
              v60,
              v56,
              v66);
          }
          else
          {
            v7 = v72;
          }
          break;
        case 12:
          v31 = (unsigned int *)a2;
          if ( v5 < 0x10 )
          {
            Resource = -1073741811;
            break;
          }
          a2 += 16;
          v5 -= 16;
          v32 = v31[3];
          this = ((_DWORD)v32 + 3) & 0xFFFFFFFC;
          if ( (unsigned int)this < (unsigned int)v32 || v5 < (unsigned int)this )
          {
LABEL_131:
            Resource = -1073741811;
            break;
          }
          v33 = a2;
          a2 += (unsigned int)this;
          v5 -= this;
          a3 = v31[2];
          this = v31[1];
          v34 = (unsigned int)(this - 1);
          if ( !(_DWORD)this )
            goto LABEL_152;
          if ( v34 >= *((_QWORD *)v7 + 10) )
            goto LABEL_152;
          _mm_lfence();
          this = v34 * *((_QWORD *)v7 + 11);
          v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *((_QWORD *)v7 + 7));
          if ( !v13 )
            goto LABEL_152;
          v64 = 0;
          Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, unsigned __int64, char *, __int64, char *))(*(_QWORD *)v13 + 144LL))(
                       v13,
                       v7,
                       a3,
                       v33,
                       v32,
                       &v64);
          if ( Resource >= 0 )
          {
            v14 = v64 == 0;
LABEL_24:
            if ( !v14 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v7, v13);
          }
          break;
        default:
          switch ( v10 )
          {
            case 0:
              v47 = 0LL;
              v67 = 0LL;
              v48 = a2;
              if ( v5 >= 0x18 && a4 )
              {
                a2 += 24;
                v5 -= 24;
                Src = (void *)*((_QWORD *)v48 + 1);
                v49 = *((unsigned int *)v48 + 4);
                v66 = v49;
                if ( !(_DWORD)v49 )
                  Resource = -1073741811;
                if ( Resource >= 0 )
                {
                  v47 = (void *)Win32AllocPoolWithQuota(v49, 1717715780LL);
                  v67 = v47;
                  if ( !v47 )
                  {
                    Resource = -1073741801;
LABEL_99:
                    v7 = v72;
                    goto LABEL_100;
                  }
                  v50 = Src;
                  if ( (char *)Src + v49 < Src || (unsigned __int64)Src + v49 > MmUserProbeAddress )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v47, v50, v49);
                  a3 = (unsigned __int64)a5;
                }
                if ( Resource < 0 )
                  goto LABEL_99;
                v59 = (unsigned int *)a3;
                v51 = v49;
                v7 = v72;
                Resource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(v72, v47, v51, 0, v59);
              }
              else
              {
                Resource = -1073741811;
              }
LABEL_100:
              if ( v47 )
                Win32FreePool((__int64)v47);
              break;
            case 1:
              v36 = (unsigned int *)a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                Resource = DirectComposition::CApplicationChannel::CreateResource(v7, v36[1], v36[2], v36[3] != 0);
              }
              goto LABEL_26;
            case 2:
              this = (unsigned __int64)a2;
              if ( v5 < 0x18 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 24;
                v5 -= 24;
                Resource = DirectComposition::CApplicationChannel::OpenSharedResource(
                             v7,
                             *(_DWORD *)(this + 4),
                             *(void **)(this + 8),
                             *(_DWORD *)(this + 16),
                             *(_DWORD *)(this + 20) != 0);
              }
              goto LABEL_26;
            case 3:
              v37 = a2;
              if ( v5 < 8 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 8;
                v5 -= 8;
                Resource = DirectComposition::CApplicationChannel::ReleaseResource(v7, *((_DWORD *)v37 + 1));
              }
              goto LABEL_26;
            case 4:
              v52 = a2;
              if ( v5 >= 0x18 )
              {
                a2 += 24;
                v5 -= 24;
                Resource = DirectComposition::CApplicationChannel::GetAnimationTime(
                             v7,
                             *((_DWORD *)v52 + 1),
                             *((_QWORD *)v52 + 1),
                             (__int64 *)v52 + 2);
              }
              else
              {
                Resource = -1073741811;
              }
              goto LABEL_26;
            case 5:
              this = (unsigned __int64)a2;
              if ( v5 >= 0x18 )
              {
                a2 += 24;
                v5 -= 24;
                Resource = DirectComposition::CApplicationChannel::CapturePointer(
                             v7,
                             *(unsigned int *)(this + 4),
                             *(unsigned int *)(this + 8),
                             *(unsigned int *)(this + 12),
                             *(_QWORD *)(this + 16));
              }
              else
              {
                Resource = -1073741811;
              }
              goto LABEL_26;
            case 6:
              v41 = a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                Resource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                             v7,
                             *((_DWORD *)v41 + 1),
                             (void **)v41 + 1);
              }
              goto LABEL_26;
            case 7:
              v11 = a2;
              if ( v5 < 0xC )
              {
                Resource = -1073741811;
                goto LABEL_26;
              }
              a2 += 12;
              v5 -= 12;
              v12 = *((unsigned int *)v11 + 2);
              this = *((unsigned int *)v11 + 1);
              v63 = 0;
              a3 = (unsigned int)(this - 1);
              if ( !(_DWORD)this )
                goto LABEL_152;
              if ( a3 >= *((_QWORD *)v7 + 10) )
                goto LABEL_152;
              _mm_lfence();
              this = a3 * *((_QWORD *)v7 + 11);
              v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *((_QWORD *)v7 + 7));
              if ( !v13 )
                goto LABEL_152;
              Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, char *))(*(_QWORD *)v13 + 168LL))(
                           v13,
                           v12,
                           &v63);
              if ( Resource < 0 )
                goto LABEL_26;
              v14 = v63 == 0;
              goto LABEL_24;
            case 10:
              v42 = a2;
              if ( v5 < 0x18 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 24;
                v5 -= 24;
                Resource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                             v7,
                             *((_DWORD *)v42 + 1),
                             *((_DWORD *)v42 + 2),
                             *((void **)v42 + 2));
              }
              goto LABEL_26;
            case 11:
              v53 = (unsigned int *)a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
                goto LABEL_26;
              }
              a2 += 16;
              v5 -= 16;
              v70 = 0LL;
              a3 = v53[3];
              v70 = (v53[3] * (unsigned __int128)8uLL) >> 64;
              this = 8 * a3;
              if ( is_mul_ok(a3, 8uLL) )
              {
                Resource = 0;
              }
              else
              {
                this = -1LL;
                Resource = -1073741675;
              }
              if ( Resource < 0 )
                goto LABEL_26;
              if ( v5 < this )
                goto LABEL_131;
              v54 = (const unsigned __int64 *)a2;
              a2 += this;
              v5 -= this;
              Resource = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                           v7,
                           v53[1],
                           v53[2],
                           v54,
                           a3);
              goto LABEL_26;
            case 14:
              this = (unsigned __int64)a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                a3 = *(unsigned int *)(this + 12);
                v38 = 4 * a3;
                if ( v5 < 4 * a3 )
                  goto LABEL_131;
                v39 = (const unsigned int *)a2;
                a2 += v38;
                v5 -= v38;
                Resource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                             v7,
                             *(_DWORD *)(this + 4),
                             *(_DWORD *)(this + 8),
                             v39,
                             *(unsigned int *)(this + 12));
              }
              goto LABEL_26;
            case 15:
              v45 = a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                             v7,
                             *((_DWORD *)v45 + 1),
                             *((_DWORD *)v45 + 2),
                             *((_DWORD *)v45 + 3));
              }
              goto LABEL_26;
            case 16:
              v43 = a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                             v7,
                             *((_DWORD *)v43 + 1),
                             *((_QWORD *)v43 + 1));
              }
              goto LABEL_26;
            case 17:
              this = (unsigned __int64)a2;
              if ( v5 < 0x14 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 20;
                v5 -= 20;
                Resource = DirectComposition::CApplicationChannel::AddVisualChild(
                             v7,
                             *(_DWORD *)(this + 4),
                             *(_DWORD *)(this + 8),
                             *(_DWORD *)(this + 12),
                             *(_DWORD *)(this + 16));
              }
              goto LABEL_26;
            case 18:
              this = (unsigned __int64)a2;
              if ( v5 < 0x48 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 72;
                v5 -= 72;
                if ( *(_DWORD *)(this + 24) )
                  v44 = (const struct tagMsgRoutingInfo *)(this + 32);
                else
                  v44 = 0LL;
                Resource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                             v7,
                             *(_DWORD *)(this + 4),
                             *(HWND *)(this + 8),
                             v44,
                             *(_DWORD *)(this + 16),
                             *(_DWORD *)(this + 20));
              }
              goto LABEL_26;
            case 19:
              v46 = a2;
              if ( v5 < 0x10 )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 16;
                v5 -= 16;
                Resource = DirectComposition::CApplicationChannel::SetVisualInputSink(
                             v7,
                             *((_DWORD *)v46 + 1),
                             *((void **)v46 + 1));
              }
              goto LABEL_26;
            case 20:
              v40 = a2;
              if ( v5 < 0xC )
              {
                Resource = -1073741811;
              }
              else
              {
                a2 += 12;
                v5 -= 12;
                Resource = DirectComposition::CApplicationChannel::RemoveVisualChild(
                             v7,
                             *((_DWORD *)v40 + 1),
                             *((_DWORD *)v40 + 2));
              }
              goto LABEL_26;
            default:
              goto LABEL_148;
          }
          break;
      }
    }
LABEL_26:
    a4 = v73;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qx_EtwWriteTransfer(this, 0x1C0000000uLL, a3, *v9, Resource);
      a4 = v73;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, a3, *a5);
  if ( Resource >= 0 && v5 )
    return (unsigned int)-1073741811;
  return (unsigned int)Resource;
}
