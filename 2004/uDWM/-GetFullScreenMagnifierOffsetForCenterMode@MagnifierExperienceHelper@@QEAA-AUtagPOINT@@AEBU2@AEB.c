/*
 * XREFs of ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BCB1C
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BC98C (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x1800BC91C (-ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800BCC28 (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BD04C (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BD078 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode(
        MagnifierExperienceHelper *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const double *a4)
{
  RECT *MonitorRectFromPoint; // rax
  double v9; // xmm1_8
  double v10; // xmm5_8
  struct tagPOINT result; // rax
  double v12; // xmm0_8
  double v13; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v14; // [rsp+28h] [rbp-30h] BYREF

  MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(this, &v14, a3);
  MagnifierExperienceHelper::SetMonitorRect(this, MonitorRectFromPoint);
  MagnifierExperienceHelper::SetMagnificationFactor(this, a4);
  v9 = (double)a3->y - *((double *)this + 13);
  v13 = (double)a3->x - *((double *)this + 12);
  *(double *)&v14.left = v9;
  MagnifierExperienceHelper::ClampToMonitorBounds(this, &v13, (double *)&v14.left);
  v10 = *((double *)this + 14);
  result = (struct tagPOINT)a2;
  v12 = (double)*((int *)this + 13);
  LODWORD(v13) = (int)((v13 - (double)*((int *)this + 12) / v10) * v10 + 0.5);
  HIDWORD(v13) = (int)((*(double *)&v14.left - v12 / v10) * v10 + 0.5);
  *(double *)a2 = v13;
  return result;
}
