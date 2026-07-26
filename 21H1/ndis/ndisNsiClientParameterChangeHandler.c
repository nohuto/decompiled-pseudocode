/*
 * XREFs of ndisNsiClientParameterChangeHandler @ 0x1C00FE3F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E0E0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0025D20 (WPP_RECORDER_SF_dd_ea_1C0025D20.c)
 *     WPP_RECORDER_SF_ddLLL @ 0x1C0034CC4 (WPP_RECORDER_SF_ddLLL.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C005D808 (McTemplateK0x_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00A12F4 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00A3E6C (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C00B545C (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1C00B54C4 (McTemplateK0qx_EtwWriteTransfer.c)
 *     McTemplateK0qxqqq_EtwWriteTransfer @ 0x1C00B554C (McTemplateK0qxqqq_EtwWriteTransfer.c)
 */

int __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v5; // edi
  const struct _GUID *v9; // rdx
  int *v10; // r14
  int v12; // [rsp+20h] [rbp-88h]
  char v13[8]; // [rsp+28h] [rbp-80h]
  char v14[8]; // [rsp+30h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  int v17; // [rsp+C8h] [rbp+20h]

  v4 = &retaddr;
  v17 = a4;
  v5 = a4;
  v9 = &WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                    0x16u,
                    0xAu,
                    (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    a4);
    v9 = &WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids;
  }
  v10 = *a2;
  if ( *a2 && a1 <= 0x11 )
  {
    LODWORD(v4) = a1;
    if ( (_DWORD)a1 )
    {
      LODWORD(v4) = a1 - 1;
      if ( (_DWORD)a1 == 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v14 = (*(_QWORD *)v10 >> 24) & 0xFFFFFF;
          LODWORD(v4) = WPP_RECORDER_SF_dd(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                          0x16u,
                          0xCu,
                          (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                          *((_WORD *)v10 + 3),
                          *(_QWORD *)v14);
        }
        if ( (byte_1C00E6081 & 0x20) != 0 )
          LODWORD(v4) = McTemplateK0qx_EtwWriteTransfer(
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                          (__int64)v9,
                          (__int64)a3,
                          *((unsigned __int16 *)*a2 + 3),
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
      }
      else
      {
        LODWORD(v4) = a1 - 6;
        if ( (_DWORD)a1 == 6 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v4) = WPP_RECORDER_SF_DDDDDDDDDDD(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0xDu,
                            (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                            *v10,
                            *((_WORD *)v10 + 2),
                            *((_WORD *)v10 + 3),
                            *((_BYTE *)v10 + 8),
                            *((_BYTE *)v10 + 9),
                            *((_BYTE *)v10 + 10),
                            *((_BYTE *)v10 + 11),
                            *((_BYTE *)v10 + 12),
                            *((_BYTE *)v10 + 13),
                            *((_BYTE *)v10 + 14),
                            *((unsigned __int8 *)v10 + 15));
            v5 = v17;
          }
          if ( (byte_1C00E6081 & 0x20) != 0 )
            LODWORD(v4) = McTemplateK0j_EtwWriteTransfer(a1, (__int64)v9, (__int64)a3, (__int64)v10);
        }
        else
        {
          LODWORD(v4) = a1 - 7;
          if ( (_DWORD)a1 == 7 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v13 = *v10;
              LODWORD(v4) = WPP_RECORDER_SF_d(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              4u,
                              0x16u,
                              0xEu,
                              (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                              *(_QWORD *)v13);
            }
            if ( (byte_1C00E6081 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0q_EtwWriteTransfer(
                              a1,
                              &ChangeNotificationCompartment,
                              (const GUID *)&NDIS_PROVIDER_ID,
                              **a2);
          }
          else if ( (_DWORD)a1 == 17 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v14 = (*(_QWORD *)v10 >> 24) & 0xFFFFFF;
              LODWORD(v4) = WPP_RECORDER_SF_dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              (int)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                              0x16u,
                              0xFu,
                              (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                              *((_WORD *)v10 + 3),
                              *(_QWORD *)v14);
            }
            if ( (byte_1C00E6081 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0x_EtwWriteTransfer(
                              a1,
                              &ChangeNotificationTimestamping,
                              (const GUID *)&NDIS_PROVIDER_ID,
                              *(_QWORD *)*a2);
          }
        }
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        LODWORD(v4) = WPP_RECORDER_SF_ddLLL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        (*(_QWORD *)v10 >> 24) & 0xFFFFFFLL,
                        (__int64)a3,
                        a4,
                        v12);
      if ( (byte_1C00E6081 & 0x20) != 0 )
        LODWORD(v4) = McTemplateK0qxqqq_EtwWriteTransfer(
                        (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                        (__int64)v9,
                        (__int64)a3,
                        *((unsigned __int16 *)*a2 + 3),
                        BYTE3(*(_QWORD *)*a2),
                        *a3,
                        a3[4],
                        a3[5]);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v5;
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v9,
                    0x16u,
                    0x10u,
                    (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    v15);
  }
  return (int)v4;
}
