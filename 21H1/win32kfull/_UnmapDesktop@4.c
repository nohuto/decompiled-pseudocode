/*
 * XREFs of _UnmapDesktop@4 @ 0x82292
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _WPP_RECORDER_SF_qqDD@36 @ 0x82328 (_WPP_RECORDER_SF_qqDD@36.c)
 *     ?FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z @ 0x8237C (-FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432 (-DestroyDesktop@@YGHPAUtagDESKTOP@@@Z.c)
 */

int __stdcall UnmapDesktop(_DWORD *a1)
{
  _DWORD *v1; // esi
  int *v2; // edi
  char ProcessSessionId; // al
  int v4; // ebx
  int v6; // [esp-1Ch] [ebp-28h]
  int v7; // [esp-18h] [ebp-24h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp-4h] [ebp-10h]
  struct _EPROCESS *v10; // [esp+0h] [ebp-Ch]
  struct tagDESKTOP *v11; // [esp+4h] [ebp-8h]

  v1 = a1;
  v2 = (int *)a1[1];
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *v2;
    ProcessSessionId = PsGetProcessSessionId(*v1);
    WPP_RECORDER_SF_qqDD(v6, v7, v8, (char)v2, *v1, ProcessSessionId, v9);
  }
  v1[3] = *(_DWORD *)(v1[1] - 20) + 1;
  v4 = ReferenceDwmProcess();
  if ( v1[2] == 1 && *v1 != _gpepCSRSS && *v1 != v4 )
    FreeView(v10, v11);
  DereferenceDwmProcess(v4);
  if ( v1[3] == 1 )
    DestroyDesktop(v10);
  if ( !a1 )
    UserSessionSwitchLeaveCrit();
  return 0;
}
