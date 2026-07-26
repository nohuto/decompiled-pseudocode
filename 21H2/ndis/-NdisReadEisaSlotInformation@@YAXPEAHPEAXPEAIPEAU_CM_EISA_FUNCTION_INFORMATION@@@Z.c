/*
 * XREFs of ?NdisReadEisaSlotInformation@@YAXPEAHPEAXPEAIPEAU_CM_EISA_FUNCTION_INFORMATION@@@Z @ 0x1C00C07B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisReadEisaSlotInformation(
        int *a1,
        void *a2,
        unsigned int *a3,
        struct _CM_EISA_FUNCTION_INFORMATION *a4)
{
  char v4; // bl
  int v6; // [rsp+30h] [rbp-18h]

  v4 = (char)a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xCu,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      a2);
  *a1 = -1073741637;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = -1073741637;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xDu,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      v4,
      v6);
  }
}
