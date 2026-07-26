/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010115C
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0105634 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A5C (WPP_RECORDER_SF_Sd.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C0026AA0 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C01005A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0101918 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B00 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C0101FE4 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  signed int Uint64; // edi
  __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // r8
  const char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+40h] BYREF
  struct KRegKey *v19; // [rsp+A0h] [rbp+50h] BYREF

  v19 = this;
  result = NetSetupPropertyBag::ReadString(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00C9450,
             &a3->m_ptr);
  if ( (int)result < 0 )
    return result;
  result = NetSetupPropertyBag::ReadString(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00C9420,
             &a3[1].m_ptr);
  if ( (int)result < 0 )
    return result;
  v18 = 0;
  Uint64 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00C9408,
             &v18);
  if ( Uint64 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v15 = 19;
LABEL_49:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v15,
      (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
      Uint64);
    return (unsigned int)Uint64;
  }
  LOWORD(a3[2].m_ptr) = v18;
  Uint64 = NetSetupPropertyBag::ReadUint64(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00C9390,
             (unsigned __int64 *)&a3[3]);
  if ( Uint64 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v15 = 20;
    goto LABEL_49;
  }
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v19,
              (const struct _NETSETUPPROPKEY *)&unk_1C00C93A8,
              (unsigned int *)&a3[7]) < 0 )
    LODWORD(a3[7].m_ptr) = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v19,
              (const struct _NETSETUPPROPKEY *)&unk_1C00C9378,
              (unsigned int *)&a3[7].m_ptr + 1) < 0 )
    HIDWORD(a3[7].m_ptr) = 0;
  result = NetSetupPropertyBag::ReadBoolean(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00C93F0,
             (bool *)&a3[16].m_ptr + 5);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadBoolean(
               (NetSetupPropertyBag *)&v19,
               (const struct _NETSETUPPROPKEY *)&unk_1C00C94B0,
               (bool *)&a3[16].m_ptr + 4);
    if ( (int)result >= 0 )
    {
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C9360,
                 (unsigned int *)&a3[4]);
      if ( (_DWORD)result == -1073741772 )
      {
        LODWORD(a3[4].m_ptr) = 0;
      }
      else if ( (_DWORD)result )
      {
        return result;
      }
      LOWORD(a3[2].m_ptr) = v18;
      HIDWORD(a3[6].m_ptr) = 0;
      result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
      if ( (int)result < 0 )
        return result;
      if ( a2->m_ptr )
      {
        LOWORD(a3[8].m_ptr) = 0;
        v9 = 0x7FFFLL;
        v10 = L"CurrentAddress";
        v17 = 0LL;
        do
        {
          if ( !*(_WORD *)v10 )
            break;
          v10 += 2;
          --v9;
        }
        while ( v9 );
        v11 = (0x7FFF - v9) & -(__int64)(v9 != 0);
        Uint64 = v9 == 0 ? 0xC000000D : 0;
        if ( v9 )
        {
          *((_QWORD *)&v17 + 1) = L"CurrentAddress";
          LOWORD(v17) = 2 * v11;
          WORD1(v17) = 2 * v11 + 2;
          Uint64 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(a2, &v17, &a3[8]);
        }
        if ( Uint64 != -1073741772 )
        {
          if ( Uint64 < 0 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x16u,
                0x12u,
                (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
                (const wchar_t *)L"CurrentAddress",
                Uint64);
          }
          else
          {
            Uint64 = 0;
          }
          if ( Uint64 < 0 )
            return (unsigned int)Uint64;
        }
        WORD1(a3[12].m_ptr) = 0;
        v17 = 0LL;
        v12 = L"PermanentAddress";
        v13 = 0x7FFFLL;
        do
        {
          if ( !*(_WORD *)v12 )
            break;
          v12 += 2;
          --v13;
        }
        while ( v13 );
        v14 = (0x7FFF - v13) & -(__int64)(v13 != 0);
        Uint64 = v13 == 0 ? 0xC000000D : 0;
        if ( v13 )
        {
          *((_QWORD *)&v17 + 1) = L"PermanentAddress";
          LOWORD(v17) = 2 * v14;
          WORD1(v17) = 2 * v14 + 2;
          Uint64 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(
                     a2,
                     &v17,
                     (char *)&a3[12].m_ptr + 2);
        }
        if ( Uint64 != -1073741772 )
        {
          if ( Uint64 < 0 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v16) = Uint64;
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x16u,
                0x12u,
                (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
                (const wchar_t *)L"PermanentAddress",
                v16);
            }
          }
          else
          {
            Uint64 = 0;
          }
          if ( Uint64 < 0 )
            return (unsigned int)Uint64;
        }
      }
      BYTE6(a3[16].m_ptr) = 1;
      result = NetSetupPropertyBag::ReadBoolean(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C9438,
                 (bool *)&a3[16].m_ptr + 7);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C9498,
                 (unsigned int *)&a3[17]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C9480,
                 (unsigned int *)&a3[17].m_ptr + 1);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C9468,
                 (unsigned int *)&a3[18]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
        return 0LL;
      }
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
