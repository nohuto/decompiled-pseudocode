/*
 * XREFs of ?IsBackgroundExtensionContract@@YA_NPEBG@Z @ 0x180462B74
 * Callers:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180463380 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

char __fastcall IsBackgroundExtensionContract(const unsigned __int16 *a1)
{
  const wchar_t **v2; // rdi
  unsigned int v3; // ebx
  _QWORD v5[12]; // [rsp+28h] [rbp-19h] BYREF

  v5[0] = L"Windows.BackgroundTasks";
  v2 = (const wchar_t **)v5;
  v3 = 0;
  v5[1] = L"Windows.PreInstalledConfigTask";
  v5[2] = L"Windows.UpdateTask";
  v5[3] = L"Windows.AppService";
  v5[4] = L"Windows.AppointmentDataProvider";
  v5[5] = L"Windows.ContactDataProvider";
  v5[6] = L"Windows.EmailDataProvider";
  v5[7] = L"Windows.UserDataTaskDataProvider";
  v5[8] = L"Windows.PrintWorkflowBackgroundTask";
  v5[9] = L"Windows.BarcodeScannerProvider";
  v5[10] = L"Windows.PosPaymentConnector";
  while ( _o__wcsicmp(a1, *v2) )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xB )
      return 0;
  }
  return 1;
}
